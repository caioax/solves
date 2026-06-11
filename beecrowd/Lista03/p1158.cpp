// problem: 1158 - Soma de Ímpares Consecutivos III

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x, y, s = 0;
        cin >> x >> y;

        for (int i = x; i < (x + (y * 2)); i++) {
            if (i % 2 != 0) s += i;
        }
        cout << s << endl;
    }

    return 0;
}
