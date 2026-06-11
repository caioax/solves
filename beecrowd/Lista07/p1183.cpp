// problem: 1183 - Acima da Diagonal Principal

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tam = 12, d = 0;
    double s = 0, x;
    char t;
    cin >> t;
    cout << fixed << setprecision(1);

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cin >> x;
            if (i < j) {
                s += x;
                d++;
            }
        }
    }

    if (t == 'S')
        cout << s << "\n";
    else
        cout << s / d << "\n";

    return 0;
}
