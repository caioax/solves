// problem: 1858 - A Resposta de Theon

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    pair<int, int> p{21, 0};
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x < p.first) {
            p = {x, i};
        }
    }

    cout << p.second << endl;

    return 0;
}
