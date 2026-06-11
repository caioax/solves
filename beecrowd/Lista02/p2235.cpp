// problems: 2235 - Andando no Tempo

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b || a == c || b == c) {
        cout << "S" << endl;
        return 0;
    }

    if (b < c) swap(b, c);
    if (a < b) swap(a, b);

    if (a == (b + c)) {
        cout << "S" << endl;
        return 0;
    }

    cout << "N" << endl;
    return 0;
}
