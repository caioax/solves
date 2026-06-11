// problem: 1046 - Tempo de Jogo

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, time;
    cin >> a >> b;

    time = 24 - a + b;

    if (time > 24) time = time - 24;

    cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
    return 0;
}
