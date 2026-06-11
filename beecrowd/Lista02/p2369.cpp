// problems: 2369 - Conta de Água

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t = 7;
    cin >> n;

    if (n <= 10) {
        cout << t << endl;
        return 0;
    }

    n -= 10;

    if (n <= 20) {
        t += n;
        cout << t << endl;
        return 0;
    }

    n -= 20;
    t += 20;

    if (n <= 70) {
        t += n * 2;
        cout << t << endl;
        return 0;
    }

    n -= 70;
    t += n * 5 + 140;

    cout << t << endl;
    return 0;
}
