// problem: 1332 - Um-Dois-Três

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string one = "one";
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() > 3) {
            cout << "3\n";
            continue;
        }
        int erros = 0;
        for (int i = 0; i < 3; i++) {
            if (one[i] != s[i]) erros++;
        }
        if (erros > 1) {
            cout << "2\n";
        } else {
            cout << "1\n";
        }
    }

    return 0;
}
