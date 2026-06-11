// problem: 1796 - Economia Brasileira

#include <bits/stdc++.h>
using namespace std;

int main() {
    double q, r = 0;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int c;
        cin >> c;
        r += c;
    }

    if (r < (q / 2)) {
        cout << "Y" << endl;
        return 0;
    }

    cout << "N" << endl;

    return 0;
}
