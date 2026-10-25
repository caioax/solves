#include <bits/stdc++.h>
using namespace std;

int pesquisaSequencial(string vet, int tam, char dado) {

    int i;
    for (i = 0; i < tam; i++)

        if (vet[i] == dado)

            return (i);

    return (0);
}

int main() {
    cout << "--------------------------------\n";
    cout << "Digite sua string: ";
    string s;
    getline(cin, s);
    cout << "Alvo: ";
    string alvo;
    cin >> alvo;
    cout << "--------------------------------\n";

    string possivelAlvo;
    char c = alvo[0];
    int r = 0;
    int i = pesquisaSequencial(s, (int)s.size(), c);

    for (int j = 0; j < (int)alvo.size(); j++) {
        possivelAlvo += s[i];
        i++;
    }

    if (possivelAlvo == alvo) {
        r = i - (int)alvo.size();
    }

    cout << r << "\n";

    return 0;
}
