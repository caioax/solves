// problem: 2373 - Garçom

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r = 0;
    cin >> n;
    while (n--) {
        int l, c;
        cin >> l >> c;
        if (l > c) r += c;
    }
    cout << r << "\n";

    return 0;
}
