// problem: 1192 - O jogo Matemático de Paula

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x, y;
        char c;
        cin >> x >> c >> y;
        if (x == y) {
            cout << x * y << "\n";
        } else if (c < 95) {
            cout << y - x << "\n";
        } else {
            cout << x + y << "\n";
        }
    }

    return 0;
}
