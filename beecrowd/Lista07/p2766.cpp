// problem: 2766 - Entrada e Saída Lendo e Pulando Nomes

#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        string s;
        cin >> s;

        if (i == 2 || i == 6 || i == 8) cout << s << "\n";
    }

    return 0;
}
