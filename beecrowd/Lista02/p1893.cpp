// problems: 1893 - Fases da Lua

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (y <= 2) {
        cout << "nova" << endl;
        return 0;
    }

    if (y >= 97) {
        cout << "cheia" << endl;
        return 0;
    }

    if (x <= y) {
        cout << "crescente" << endl;
        return 0;
    }

    cout << "minguante" << endl;
    return 0;
}
