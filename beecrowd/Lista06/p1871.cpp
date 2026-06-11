// problem: 1871 - Zero vale Zero

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;

    while (cin >> m >> n && (n || m)) {
        string s = to_string(n + m);
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '0') continue;
            cout << s[i];
        }
        cout << "\n";
    }

    return 0;
}
