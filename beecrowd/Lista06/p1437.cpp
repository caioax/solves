// problem: 1437 - Esquerda, Volver!

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    vector<string> direcoes = {"N", "L", "S", "O"};
    while (cin >> n >> s && n) {
        int direcao = 0;
        for (int c : s) {
            direcao += c == 'D' ? 1 : -1;
            if (direcao < 0)
                direcao = 3;
            else if (direcao > 3)
                direcao = 0;
        }
        cout << direcoes[direcao] << "\n";
    }

    return 0;
}
