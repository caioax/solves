// problem: 1181 - Linha na Matriz

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, tam = 12;
    double s = 0, x;
    char t;
    cin >> l >> t;
    cout << fixed << setprecision(1);

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cin >> x;
            if (i == l) s += x;
        }
    }

    if (t == 'S')
        cout << s << "\n";
    else
        cout << s / tam << "\n";

    return 0;
}
