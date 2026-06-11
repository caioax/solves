// problem: 2153 - Sanduicheiche

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int ic = 0;
    set<char> vogais = {'a', 'e', 'i', 'o', 'u'};

    while (cin >> s) {
        int qv = 0, n = s.size();
        ic = n;
        while (n--) {
            if (vogais.count(s[n])) {
                qv++;
            }
            if (qv == 2) {
                ic = n;
                break;
            }
        }
        for (int i = 0; i < ic; i++) {
            cout << s[i];
        }
        cout << "\n";
    }

    return 0;
}
