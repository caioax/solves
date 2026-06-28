#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m, r = 1;
    cin >> n >> m;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    bool end = false;
    int i = 1, f = n - 2;
    if (m % 2 != 0 && v[0] > 0) {
        r *= v[0];
        m--;
        i++;
    } else if (m % 2 != 0) {
        for (int i = 0; i < m; i++) {
            r *= v[i];
        }
        end = true;
    }

    while (m >= 2 && !end) {
        ll mp = v[i - 1] * v[i];
        ll mn = v[f] * v[f + 1];

        if (mn > mp) {
            f -= 2;
        } else {
            i += 2;
        }

        r *= max(mp, mn);
        m -= 2;
    }

    cout << r << "\n";

    return 0;
}
