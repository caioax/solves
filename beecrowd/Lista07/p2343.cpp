// problem: 2343 - Caçadores de Mitos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool achou = false;
    cin >> n;

    set<pair<int, int>> cords;

    while (n--) {
        int x, y;
        cin >> x >> y;

        if (cords.count({x, y})) achou = true;
        if (!achou) cords.insert({x, y});
    }

    if (achou)
        cout << "1\n";
    else
        cout << "0\n";

    return 0;
}
