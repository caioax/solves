// problem: 2152 - Pepe, Já Tirei a Vela!

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string sh = "", sm = "";
        int h, m, o;
        string so;
        cin >> h >> m >> o;

        if (h < 10) sh = "0";
        if (m < 10) sm = "0";
        if (o == 0) {
            so = " - A porta fechou!";
        } else {
            so = " - A porta abriu!";
        }

        cout << sh << h << ":" << sm << m << so << endl;
    }

    return 0;
}
