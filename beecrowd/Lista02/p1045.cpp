// problem: 1045 - Tipos de Triângulos

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c, hp, cs;
    cin >> a >> b >> c;

    if (c > b) swap(c, b);
    if (b > a) swap(b, a);
    if (c > b) swap(c, b);

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }

    hp = a * a;
    cs = b * b + c * c;

    if (hp == cs) {
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (hp > cs) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (hp < cs) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (a == b && a == c) {
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
