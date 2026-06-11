// problem: 1566 - Altura

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nc;
    cin >> nc;

    while (nc--) {
        multiset<int> ms;
        int n;
        cin >> n;
        while (n--) {
            int h;
            cin >> h;
            ms.insert(h);
        }
        bool first = true;
        for (int x : ms) {
            if (!first) cout << ' ';
            cout << x;
            first = false;
        }
        cout << "\n";
    }

    return 0;
}
