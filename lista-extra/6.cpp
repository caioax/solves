#include <bits/stdc++.h>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Funcionario {
    string nome;
    string cargo;
    float salario;
    Data adimissao;
};

bool dataValida(Data data) {
    bool ehBissexto =
        (data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0);
    bool anoValido = data.ano >= 1;
    bool mesValido = data.mes >= 1 && data.mes <= 12;

    vector<int> limites = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ehBissexto) limites[1]++;

    bool diaValido = data.dia >= 1 && data.dia <= limites[data.mes - 1];
    return anoValido && mesValido && diaValido;
}

double aumentoDeSalario(Funcionario funcionario, int aumento) {
    return funcionario.salario * (1 + aumento);  //
}

int anosDeCasa(Funcionario funcionario, Data diaAtual) {
    return diaAtual.ano - funcionario.adimissao.ano;  //
}

int main() {
    Data diaAtual;
    Funcionario funcionario;
    double aumento;
    char l;
    cin >> funcionario.nome;
    cin >> funcionario.cargo;
    cin >> funcionario.salario;
    cin >> aumento;
    cin >> funcionario.adimissao.dia >> l >> funcionario.adimissao.mes >> l >>
        funcionario.adimissao.ano;
    cin >> diaAtual.dia >> l >> diaAtual.mes >> l >> diaAtual.ano;

    cout << fixed << setprecision(2);
    cout << "Funcionario infos:\n";
    cout << "Nome: " << funcionario.nome << "\n";
    cout << "Cargo: " << funcionario.cargo << "\n";
    cout << "Salario: " << funcionario.salario << "\n";
    cout << "Novo salario: " << aumentoDeSalario(funcionario, aumento) << "\n";
    cout << "Adimissao: " << setw(2) << setfill('0')
         << funcionario.adimissao.dia << '/' << setw(2) << setfill('0')
         << funcionario.adimissao.mes << '/' << funcionario.adimissao.ano
         << "\n";
    cout << "Anos de trabalho: " << anosDeCasa(funcionario, diaAtual) << "\n";

    return 0;
}
