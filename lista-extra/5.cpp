#include <bits/stdc++.h>
using namespace std;

struct Ponto {
    int x;
    int y;
};

double distancia(Ponto p1, Ponto p2) {
    return sqrt(
        (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));  //
}

int main() {
    Ponto p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;

    cout << fixed << setprecision(2) << "\n";
    cout << distancia(p1, p2) << "\n";

    return 0;
}
