// problem: 2061 - As Abas de Péricles

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    while (n--) {
        string s;
        cin >> s;
        if (s == "fechou") {
            m++;
        } else {
            m--;
        }
        if (m < 0) m = 0;
    }
    cout << m << "\n";

    return 0;
}
