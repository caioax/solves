#include <bits/stdc++.h>
using namespace std;

struct Retangulo {
    int c;
    int l;
};

int area(Retangulo rec) {
    return rec.c * rec.l;  //
}

int perimetro(Retangulo rec) {
    return 2 * rec.c + 2 * rec.l;  //
}

int main() {
    Retangulo rec;
    cin >> rec.c >> rec.l;

    int a = area(rec);
    int p = perimetro(rec);

    cout << "Area: " << a << " u.m²\n";
    cout << "Perimetro: " << p << " u.m\n";

    return 0;
}
