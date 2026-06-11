// problem: 1803 - Matring

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> k(4);

    for (int i = 0; i < 4; i++) {
        cin >> k[i];
    }
    int n = k[0].size();

    vector<string> c(n);

    for (string s : k) {
        for (int j = 0; j < n; j++) {
            c[j].push_back(s[j]);
        }
    }
    int f = stoi(c[0]);
    int l = stoi(c[n - 1]);

    for (int i = 1; i < n - 1; i++) {
        int x = stoi(c[i]);
        char c = (f * x + l) % 257;

        cout << c;
    }
    cout << "\n";

    return 0;
}
