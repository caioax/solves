// problem: 1533 - Detetive Watson

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        int maior = 0, sMaior = 0, index;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > maior) maior = x;
            v[i] = x;
        }
        for (int i = 0; i < n; i++) {
            if (v[i] == maior) continue;
            if (v[i] > sMaior) {
                sMaior = v[i];
                index = i + 1;
            }
        }
        cout << index << "\n";
    }

    return 0;
}
