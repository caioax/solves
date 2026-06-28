#include <bits/stdc++.h>
using namespace std;

struct Aluno {
    string nome;
    string matricula;
    vector<int> notas;
};

double media(vector<int> notas) {
    double s = 0;
    for (int i = 0; i < 3; i++) {
        s += notas[i];
    }
    return s / 3;
}

void printAlunoInfo(Aluno aluno) {
    double m = media(aluno.notas);
    if (m >= 7) {
        cout << "---Aprovado--->  ;)\n";
    } else {
        cout << "---Reprovado--->  :(\n";
    }
    cout << "Dados:\n";
    cout << "   nome: " << aluno.nome << "\n";
    cout << "   matricula: " << aluno.matricula << "\n";
    cout << "Notas:\n";
    cout << "   media: " << m << "\n";
    for (int i = 0; i < 3; i++) {
        cout << "   prova 0" << i + 1 << ": " << aluno.notas[i] << "\n";
    }
}

int main() {
    Aluno aluno;
    cin >> aluno.nome >> aluno.matricula;
    cout << fixed << setprecision(2);
    vector<int> notas(3);
    for (int i = 0; i < 3; i++) {
        cin >> notas[i];
    }
    aluno.notas = notas;

    printAlunoInfo(aluno);

    return 0;
}
