// problem: 1397 - Jogo do Maior

#include <bits/stdc++.h>
using namespace std;

int main() {
    while (1) {
        int n, pa = 0, pb = 0;
        cin >> n;
        if (n == 0) return 0;

        while (n--) {
            int a, b;
            cin >> a >> b;
            if (a > b) {
                pa++;
            } else if (b > a) {
                pb++;
            }
        }
        cout << pa << ' ' << pb << "\n";
    }

    return 0;
}
