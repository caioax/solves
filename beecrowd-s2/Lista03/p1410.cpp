#include <bits/stdc++.h>
using namespace std;

void BubleSort(vector<int>& v, int t) {
    int aux;

    for (int i = 0; i < t; i++) {
        for (int j = t - 1; j > i; j--) {
            if (v[j] < v[j - 1]) {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

int main() {
    int a, d;

    while (cin >> a >> d && (a || d)) {
        vector<int> ja(a), jd(d);
        for (int i = 0; i < a; i++) {
            cin >> ja[i];
        }

        for (int i = 0; i < d; i++) {
            cin >> jd[i];
        }

        BubleSort(ja, a);
        BubleSort(jd, d);

        bool impedido = false;
        for (int i = 0; i < a; i++) {
            if (ja[i] < jd[1]) {
                impedido = true;
                break;
            }
        }
        if (impedido)
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}
