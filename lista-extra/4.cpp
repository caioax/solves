#include <bits/stdc++.h>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

bool dataValida(Data data) {
    bool ehBissexto =
        (data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0);
    bool anoValido = data.ano >= 1;
    bool mesValido = data.mes >= 1 && data.mes <= 12;

    vector<int> limites = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ehBissexto) limites[1]++;

    bool diaValido = false;
    if (mesValido)
        diaValido = data.dia >= 1 && data.dia <= limites[data.mes - 1];

    return anoValido && mesValido && diaValido;
}

pair<Data, Data> compararDatas(Data data1, Data data2) {
    if (data1.ano < data2.ano) {
        return {data1, data2};
    } else if (data2.ano < data1.ano) {
        return {data2, data1};
    }

    if (data1.mes < data2.mes) {
        return {data1, data2};
    } else if (data2.mes < data1.mes) {
        return {data2, data1};
    }

    if (data1.dia < data2.dia) {
        return {data1, data2};
    } else if (data2.dia < data1.dia) {
        return {data2, data1};
    }

    return {data1, data2};
}

int main() {
    Data data1;
    Data data2;
    // Usei um char l para pegar corretamente com a formatacao:
    // 00/00/0000
    char l;
    cin >> data1.dia >> l >> data1.mes >> l >> data1.ano;
    cin >> data2.dia >> l >> data2.mes >> l >> data2.ano;

    bool validadeData1 = dataValida(data1);
    bool validadeData2 = dataValida(data2);

    if (validadeData1) {
        cout << "01: Data válida\n";
    } else {
        cout << "01: Data inválida\n";
    }

    if (validadeData2) {
        cout << "02: Data válida\n";
    } else {
        cout << "02: Data inválida\n";
    }
    cout << "\n";

    pair<Data, Data> datas = compararDatas(data1, data2);

    if (!validadeData1 || !validadeData2) return 0;
    cout << "Datas em ordem:\n";
    cout << setw(2) << setfill('0') << datas.first.dia << "/" << setw(2)
         << setfill('0') << datas.first.mes << "/" << datas.first.ano << "\n";
    cout << setw(2) << setfill('0') << datas.second.dia << "/" << setw(2)
         << setfill('0') << datas.second.mes << "/" << datas.second.ano << "\n";

    return 0;
}
