// problem: 1154 - Idades

#include <bits/stdc++.h>
using namespace std;

int main() {
    int idade, t = 0;
    double s = 0;

    while (cin >> idade) {
        if (idade < 0) break;
        t++;
        s += idade;
    }

    cout << fixed << setprecision(2);
    cout << (s / t) << endl;

    return 0;
}
