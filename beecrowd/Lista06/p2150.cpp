// problem: 2150 - Vogais Alienígenas

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    while (cin >> a) {
        set<char> t;
        int r = 0;
        cin.ignore();
        getline(cin, b);

        for (int i = 0; i < (int)a.size(); i++) {
            t.insert(a[i]);
        }

        for (int i = 0; i < (int)b.size(); i++) {
            if (t.count(b[i])) {
                r++;
            }
        }
        cout << r << "\n";
    }

    return 0;
}
