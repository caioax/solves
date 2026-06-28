#include <bits/stdc++.h>
using namespace std;

struct Jogador {
    string nome;
    char skin;
    set<pair<int, int>> cords;
};

struct Tabuleiro {
    vector<vector<char>> matriz;

    set<pair<int, int>> lugares = {
        {0, 1}, {0, 5}, {0, 9}, {2, 1}, {2, 5}, {2, 9}, {4, 1}, {4, 5}, {4, 9}};
};

map<int, int> tx{{1, 0}, {2, 2}, {3, 4}};
map<int, int> ty{{1, 1}, {2, 5}, {3, 9}};

void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void endPag(bool allEnd = false) {
    if (!allEnd)
        cout << "Aperte Enter para continuar: ";
    else
        cout << "Aperte Enter para encerrar o programa: ";
    cin.ignore();
    cin.get();
}

Jogador gerarJogador(int x) {
    Jogador j;
    clear();
    cout << "Gerando jogador " << x << "\n";
    cout << "----------------------------\n";
    cout << "Nome: ";
    cin >> j.nome;
    cout << "Skin: ";
    cin >> j.skin;
    cout << "----------------------------\n";
    cout << "Jogador " << x << " gerado com sucesso!\n\n";
    endPag();
    return j;
}

vector<vector<char>> gerarMatriz() {
    vector<vector<char>> matriz(5, vector<char>(11, ' '));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= 10; j++) {
            if (j % 4 == 3) {
                matriz[i][j] = '|';
            } else if (i % 2 != 0) {
                matriz[i][j] = '-';
            } else {
                matriz[i][j] = ' ';
            }
        }
    }
    return matriz;
}

void updateMatriz(Jogador& j1, Jogador& j2, Tabuleiro& tab) {
    for (int i = 0; i < 5; i += 2) {
        for (int j = 1; j <= 10; j += 4) {
            if (!tab.lugares.count({i, j})) continue;
            if (j1.cords.count({i, j})) {
                tab.matriz[i][j] = j1.skin;
                tab.lugares.erase({i, j});
            } else if (j2.cords.count({i, j})) {
                tab.matriz[i][j] = j2.skin;
                tab.lugares.erase({i, j});
            }
        }
    }
}

int verificarSeHaVencedor(Jogador& j1, Jogador& j2, Tabuleiro& tab) {
    vector<int> vj1(8, 0);
    vector<int> vj2(8, 0);
    int iv = 1, jv = 1;
    for (int i = 0; i < 5; i += 2) {
        jv = 1;
        for (int j = 1; j <= 10; j += 4) {
            if (tab.matriz[i][j] == j1.skin) {
                vj1[iv - 1]++;
                vj1[2 + jv]++;
                if (iv == jv) vj1[6]++;
                if (iv + jv == 4) vj1[7]++;
            } else if (tab.matriz[i][j] == j2.skin) {
                vj2[iv - 1]++;
                vj2[2 + jv]++;
                if (iv == jv) vj2[6]++;
                if (iv + jv == 4) vj2[7]++;
            }
            jv++;
        }
        iv++;
    }
    for (int v : vj1) {
        if (v >= 3) return 1;
    }
    for (int v : vj2) {
        if (v >= 3) return 2;
    }
    return 0;
}

void printMatriz(Tabuleiro& tab) {
    clear();
    cout << "  |  1 | 2 | 3\n";
    cout << "--|---------------\n";
    int iv = 1;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            cout << iv << " | ";
            iv++;
        } else {
            cout << "--| ";
        }
        for (int j = 0; j <= 10; j++) {
            cout << tab.matriz[i][j];
        }
        cout << "\n";
    }
    cout << "  |\n\n";
}

void jogar(Jogador& j, Tabuleiro& tab) {
    int x, y;
    while (true) {
        cout << "(" << j.skin << ") Digite sua jogada " << j.nome << ": ";
        cin >> x >> y;
        if (!tx.count(x) || !ty.count(y) ||
            !tab.lugares.count({tx[x], ty[y]})) {
            cout << "Cordenada inválida\n";
        } else {
            break;
        }
    }

    j.cords.insert({tx[x], ty[y]});
}

void declararVitoria(Jogador& j) {
    cout << "----------------------------\n";
    cout << j.nome << " Ganhou o jogo!\n";
    cout << "Skin da vitoria: " << j.skin << "\n\n";
    endPag(true);
}

void declararEmpate(Jogador& j1, Jogador& j2) {
    cout << "----------------------------\n";
    cout << "O Jogo empatou!\n";
    cout << "Os gigantes que hoje travaram uma grande e equilibrada batalha:\n";
    cout << "Jogador 01:\n";
    cout << "   nome: " << j1.nome << "\n";
    cout << "   skin: " << j1.skin << "\n";
    cout << "Jogador 02:\n";
    cout << "   nome: " << j2.nome << "\n";
    cout << "   skin: " << j2.skin << "\n";
    endPag(true);
}

int main() {
    vector<Jogador> jogadores(2);
    for (int i = 0; i < 2; i++) {
        jogadores[i] = gerarJogador(i + 1);
    }
    int atual = 0;
    Tabuleiro tab;
    tab.matriz = gerarMatriz();

    bool mainLoop = true;
    while (mainLoop) {
        printMatriz(tab);
        jogar(jogadores[atual], tab);
        atual = !atual;
        updateMatriz(jogadores[0], jogadores[1], tab);
        int r = verificarSeHaVencedor(jogadores[0], jogadores[1], tab);

        if (!r && !tab.lugares.empty()) continue;

        mainLoop = false;
        clear();
        updateMatriz(jogadores[0], jogadores[1], tab);
        printMatriz(tab);
        if (r) {
            declararVitoria(jogadores[r - 1]);
        } else {
            declararEmpate(jogadores[0], jogadores[1]);
        }
    }

    return 0;
}
