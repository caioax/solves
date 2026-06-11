// problem: 1441 - Sequências de Granizo

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h;

    while (cin >> h) {
        if (!h) return 0;
        int nm = h;

        while (h != 1) {
            if (h % 2 == 0) {
                h /= 2;
            } else {
                h *= 3;
                h++;
            }
            if (h > nm) nm = h;
        }

        cout << nm << "\n";
    }

    return 0;
}
