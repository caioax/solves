// problem: 1079 - Médias Ponderadas

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(1);

    while (n--) {
        double a, b, c, r;
        cin >> a >> b >> c;

        r = (a * 2) + (b * 3) + (c * 5);

        cout << (r / 10) << endl;
    }

    return 0;
}
