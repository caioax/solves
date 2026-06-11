// problem: 2160 - Nome no Formulário

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if ((int)s.size() > 80) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

    return 0;
}
