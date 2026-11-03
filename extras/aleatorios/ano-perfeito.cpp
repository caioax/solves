#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, y, f, p;
    cin >> a >> y >> f >> p;

    cout << min((a % y) * p, (y - (a % y)) * f) << endl;

    return 0;
}
