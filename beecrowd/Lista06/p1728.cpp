// problem: 1728 - Difícil de Acreditar, Mas é Verdade!

#include <bits/stdc++.h>
using namespace std;

int main() {
    string tudo;
    while (cin >> tudo) {
        int in = 0, il = 0;
        vector<char> lixos = {'+', '='};
        vector<int> ints(3, 0);
        vector<string> ns(3);
        for (int i = 0; i < (int)tudo.size(); i++) {
            if (tudo[i] == lixos[il]) {
                in++;
                il = !il;
                continue;
            }
            ns[in].push_back(tudo[i]);
        }

        for (int i = 0; i < 3; i++) {
            reverse(ns[i].begin(), ns[i].end());
            ints[i] = stoi(ns[i]);
        }

        if (!ints[0] && !ints[1] && !ints[2]) {
            cout << "True\n";
            return 0;
        }

        if (ints[0] + ints[1] == ints[2]) {
            cout << "True\n";
        } else {
            cout << "False\n";
        }
    }

    return 0;
}
