// problem: 1116 - Dividindo X por Y

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(1);

    while (n--) {
        double x, y, r = 0.0;
        cin >> x >> y;

        if (y == 0) {
            cout << "divisao impossivel" << endl;
            continue;
        }

        r = x / y;

        cout << r << endl;
    }

    return 0;
}
