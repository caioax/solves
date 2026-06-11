// problem: 2139 - Natal de Pedrinho

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> c = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    int m, d;

    while (cin >> m >> d) {
        int r = 0;
        for (int i = m - 1; i < 12; i++) {
            r += c[i];
        }
        r -= d;

        if (!r) {
            cout << "E natal!\n";
            continue;
        } else if (r == 1) {
            cout << "E vespera de natal!\n";
            continue;
        } else if (r < 0) {
            cout << "Ja passou!\n";
            continue;
        }
        cout << "Faltam " << r << " dias para o natal!\n";
    }

    return 0;
}
