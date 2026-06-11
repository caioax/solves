// problem: 2060 - Desafio de Bino

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4, 0);
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            v[0] += 1;
        }
        if (x % 3 == 0) {
            v[1] += 1;
        }
        if (x % 4 == 0) {
            v[2] += 1;
        }
        if (x % 5 == 0) {
            v[3] += 1;
        }
    }

    cout << v[0] << " Multiplo(s) de 2" << endl;
    cout << v[1] << " Multiplo(s) de 3" << endl;
    cout << v[2] << " Multiplo(s) de 4" << endl;
    cout << v[3] << " Multiplo(s) de 5" << endl;

    return 0;
}
