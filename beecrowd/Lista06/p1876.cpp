// problem: 1876 - Rabiola

#include <bits/stdc++.h>
using namespace std;

int main() {
    string r;

    while (cin >> r) {
        int i = 0;
        vector<int> t(1);
        for (char c : r) {
            if (c == 'x') {
                i++;
                t.resize(i + 1);
                continue;
            }

            t[i]++;
        }

        for (int j = 1; j < (int)t.size() - 1; j++) {
            t[j] /= 2;
        }

        sort(t.rbegin(), t.rend());
        cout << t[0] << "\n";
    }
    return 0;
}
