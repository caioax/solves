// problem: 1042 - Sort Simples

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, maior, domeio, menor;

    cin >> a >> b >> c;
    maior = a;
    domeio = b;
    menor = c;

    if (menor > domeio) swap(menor, domeio);
    if (domeio > maior) swap(domeio, maior);
    if (menor > domeio) swap(menor, domeio);

    cout << menor << endl;
    cout << domeio << endl;
    cout << maior << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
