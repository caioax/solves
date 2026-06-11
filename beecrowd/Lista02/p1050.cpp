// problem: 1050 - DDD

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    map<int, string> ddd = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}};

    cin >> n;

    if (ddd.count(n)) {
        cout << ddd[n] << endl;
        return 0;
    }

    cout << "DDD nao cadastrado" << endl;

    return 0;
}
