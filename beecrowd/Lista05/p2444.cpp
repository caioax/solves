// problem: 2444 - Volume da TV

#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    while (t--) {
        int m;
        cin >> m;
        v = min(max(0, v + m), 100);
    }
    cout << v << "\n";

    return 0;
}
