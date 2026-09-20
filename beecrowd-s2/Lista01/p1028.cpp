#include <bits/stdc++.h>
using namespace std;

int mdc(int x, int y) {
    if (y == 0) return x;
    return mdc(y, x % y);
}

int main() {
    int n, x, y;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        cout << mdc(x, y) << "\n";
    }
    return 0;
}
