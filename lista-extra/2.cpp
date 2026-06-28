#include <bits/stdc++.h>
using namespace std;

struct Cubo {
    int l;
};

int volume(Cubo cubo) {
    return cubo.l * cubo.l * cubo.l;  //
}

int main() {
    Cubo cubo;
    cin >> cubo.l;

    int vol = volume(cubo);

    cout << "Volume: " << vol << " u.m³\n";

    return 0;
}
