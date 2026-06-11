// problem: 1273 - Justificador

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    bool primeiro = true;
    while (cin >> n && n) {
        int ml = 0;
        vector<string> v(n);

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            ml = max(ml, (int)s.size());
            v[i] = s;
        }

        if (!primeiro)
            cout << "\n";
        else
            primeiro = false;

        for (int i = 0; i < n; i++) {
            int e = ml - (int)v[i].size();
            string se(e, ' ');
            cout << se << v[i] << "\n";
        }
    }

    return 0;
}
