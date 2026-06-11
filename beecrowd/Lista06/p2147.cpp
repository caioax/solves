// problem: 2147 - Galopeira

#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin >> c;
    cout << fixed << setprecision(2);

    while (c--) {
        string s;
        cin >> s;
        double t = ((double)s.size()) / 100;
        cout << t << endl;
    }

    return 0;
}
