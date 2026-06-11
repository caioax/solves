// problems: 2397 - Triângulos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, hp, cp;
    cin >> a >> b >> c;

    if (b < c) swap(b, c);
    if (a < b) swap(a, b);

    if (a >= b + c) {
        cout << 'n' << endl;
        return 0;
    }

    hp = a * a;
    cp = b * b + c * c;

    if (hp == cp) {
        cout << 'r' << endl;
        return 0;
    }

    if (hp > cp) {
        cout << 'o' << endl;
        return 0;
    }

    cout << 'a' << endl;
    return 0;
}
