// problem: 1037 - Intervalo

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n;

    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Fora de intervalo" << endl;
        return 0;
    }

    if (n >= 0 && n <= 25) {
        cout << "Intervalo [0,25]" << endl;
        return 0;
    }

    if (n >= 25 && n <= 50) {
        cout << "Intervalo (25,50]" << endl;
        return 0;
    }

    if (n >= 50 && n <= 75) {
        cout << "Intervalo (50,75]" << endl;
        return 0;
    }

    if (n >= 75 && n <= 100) {
        cout << "Intervalo (75,100]" << endl;
        return 0;
    }

    return 0;
}
