#include <bits/stdc++.h>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int paginas;
    int ano;
};

map<string, int> pTitulo;           // Pegar id pelo Titulo
map<string, set<int>> pAutor;       // Pegar ids pelo Autor
map<int, Livro> livrosRegistrados;  // Pegar livro pelo id
int id = 0;

// Aqui pesquisei para ver como limpar o terminal :)
void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void endPag() {
    cout << "Aperte Enter para continuar: ";
    cin.ignore();
    cin.get();
}

string mainMenu() {
    cout << "Menu inicial:\n";
    cout << "----------------------------------\n";
    cout << "1 - Registrar novo Livro.\n";
    cout << "2 - Pesquisar livro.\n";
    cout << "3 - Listar todos os livros.\n";
    cout << "4 - Sair\n";
    cout << "----------------------------------\n";
    cout << "Digite um numero: ";
    string resposta;
    cin >> resposta;
    return resposta;
}

void livroInfos(Livro livro) {
    cout << "----------------------------------\n";
    cout << "Titulo: " << livro.titulo << "\n";
    cout << "Autor: " << livro.autor << "\n";
    cout << "N. Paginas: " << livro.paginas << "\n";
    cout << "Ano de publicacao: " << livro.ano << "\n";
    cout << "----------------------------------\n\n";
}

void registrarLivroPag() {
    Livro livro;
    cout << "Titulo: ";
    string titulo;
    cin.ignore();
    while (true) {
        getline(cin, titulo);
        if (pTitulo.count(titulo)) {
            cout << "Titulo ja registrado, tente novamente: ";
        } else {
            break;
        }
    }
    livro.titulo = titulo;
    cout << "Autor: ";
    getline(cin, livro.autor);
    cout << "Quantidade de Paginas: ";
    cin >> livro.paginas;
    cout << "Ano de publicacao: ";
    cin >> livro.ano;

    pTitulo[livro.titulo] = id;
    pAutor[livro.autor].insert(id);
    livrosRegistrados[id] = livro;
    id++;

    cout << "\nLivro registrado com sucesso:\n";
    livroInfos(livro);
    endPag();
}

set<int> idPeloTitulo(string titulo) {
    if (pTitulo.count(titulo))
        return {pTitulo[titulo]};
    else
        return set<int>();
}

set<int> idsPeloAutor(string autor) {
    return pAutor[autor];  //
}

void pesquisarLivroPag() {
    cout << "Selecione a forma de pesquisar:\n";
    cout << "----------------------------------\n";
    cout << "1 - Pelo titulo\n";
    cout << "2 - Pelo autor\n";
    cout << "----------------------------------\n";
    string resposta, pesquisa;
    set<int> ids;
    cin >> resposta;

    if (resposta == "1") {
        cout << "Digite o titulo: ";
        cin >> pesquisa;
        ids = idPeloTitulo(pesquisa);
    } else if (resposta == "2") {
        cout << "Digite o autor: ";
        cin >> pesquisa;
        ids = idsPeloAutor(pesquisa);
    } else {
        cout << "Resposta inválida :(\n";
        endPag();
        return;
    }

    clear();
    if (ids.empty()) {
        cout << "Nenhum registro encontrado :(\n";
    } else {
        cout << "Registros encontrados:\n";
        for (int i : ids) {
            livroInfos(livrosRegistrados[i]);
        }
    }
    endPag();
}

void listarTodosOsLivrosPag() {
    for (auto [id, livro] : livrosRegistrados) {
        livroInfos(livro);
    }
    endPag();
}

int main() {
    bool mainLoop = true;
    while (mainLoop) {
        clear();
        string r1 = mainMenu();
        clear();
        cout << "\n";
        if (r1 == "1") {
            registrarLivroPag();
        } else if (r1 == "2") {
            pesquisarLivroPag();
        } else if (r1 == "3") {
            listarTodosOsLivrosPag();
        } else if (r1 == "4") {
            mainLoop = false;
        }
    }

    return 0;
}
