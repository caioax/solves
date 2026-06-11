// problem: 2434 - Saldo do Vovô

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, ms = INT_MAX;
    cin >> n >> s;
    while (n--) {
        int x;
        cin >> x;
        s += x;
        ms = min(ms, s);
    }
    cout << ms << "\n";

    return 0;
}
