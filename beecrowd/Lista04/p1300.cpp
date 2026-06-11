// problem: 1300 - Horas e Minutos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while (cin >> t) {
        if (t % 6 == 0) {
            cout << "Y" << "\n";
        } else {
            cout << "N" << "\n";
        }
    }

    return 0;
}
