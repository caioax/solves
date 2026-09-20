#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>& v, int l) {
    int aux;
    for (int i = 0; i < l; i++) {
        for (int j = l - 1; j > i; j--) {
            if (v[j] < v[j - 1]) {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

int main() {
    int n;

    while (cin >> n) {
        vector<int> d, e;
        while (n--) {
            int t;
            char c;
            cin >> t >> c;
            if (c == 'E')
                e.push_back(t);
            else
                d.push_back(t);
        }

        BubbleSort(d, d.size());
        BubbleSort(e, e.size());

        int id = 0, ie = 0, c = 0;

        while (id < (int)d.size() && ie < (int)e.size()) {
            if (d[id] == e[ie]) {
                c++;
                id++;
                ie++;
            } else if (d[id] < e[ie]) {
                id++;
            } else if (e[ie] < d[id]) {
                ie++;
            }
        }

        cout << c << "\n";
    }

    return 0;
}
