// problems: 2375 - Sedex

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, l, p;
    cin >> n >> a >> l >> p;

    if ((n > a) || (n > l) || (n > p)) {
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }

    return 0;
}
