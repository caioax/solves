#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>& v, int t) {
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
    int n;
    cin >> n;

    while (n--) {
        int m, r = 0;
        cin >> m;
        vector<int> v(m), vm(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
            vm[i] = v[i];
        }

        BubbleSort(v, m);

        for (int i = 0; i < m; i++) {
            if (v[m - i - 1] == vm[i]) r++;
        }

        cout << r << "\n";
    }

    return 0;
}
