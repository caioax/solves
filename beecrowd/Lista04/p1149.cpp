// problem: 1149 - Somando Inteiros Consecutivos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, n, s = 0;
    cin >> a >> n;

    while (n < 1) {
        cin >> n;
    }

    for (int i = 0; i < n; i++) {
        s += a + i;
    }

    cout << s << endl;

    return 0;
}
