// problem: 1457 - Oráculo de Alexandria

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, r = 1;
        string s;
        cin >> n >> s;
        long long k = s.size();

        if (k >= n) {
            cout << n << "\n";
            continue;
        }

        while (n > 1) {
            r *= n;
            n -= k;
        }

        cout << r << "\n";
    }

    return 0;
}
