// problem: 1182 - Coluna na Matriz

#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, tam = 12;
    double s = 0, x;
    char t;
    cin >> c >> t;
    cout << fixed << setprecision(1);

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cin >> x;
            if (j == c) s += x;
        }
    }

    if (t == 'S')
        cout << s << "\n";
    else
        cout << s / tam << "\n";

    return 0;
}
