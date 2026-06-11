// problem: 2138 - Dígito Mais Frequente

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (cin >> s) {
        vector<int> t(10);
        int r = 0, c = 0;
        for (char c : s) {
            t[c - '0']++;
        }

        for (int i = 0; i < 10; i++) {
            if (t[i] >= c) {
                c = t[i];
                r = i;
            }
        }
        cout << r << "\n";
    }

    return 0;
}
