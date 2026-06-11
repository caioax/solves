// problem: 1179 - Preenchimento de Vetor IV

#include <bits/stdc++.h>
using namespace std;
void print(bool ePar, vector<int>& v, int max = 4) {
    string s = ePar ? "par[" : "impar[";
    for (int j = 0; j <= max; j++) {
        cout << s << j << "] = " << v[j] << "\n";
    }
}

int main() {
    vector<int> p(5), i(5);
    int indexP = 0, indexI = 0;

    for (int j = 0; j < 15; j++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            p[indexP] = x;
            indexP++;
        } else {
            i[indexI] = x;
            indexI++;
        }

        if (indexP > 4) {
            print(true, p);
            indexP = 0;
        } else if (indexI > 4) {
            print(false, i);
            indexI = 0;
        }
    }

    print(false, i, indexI - 1);
    print(true, p, indexP - 1);

    return 0;
}
