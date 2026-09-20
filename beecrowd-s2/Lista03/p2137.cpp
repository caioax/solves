#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<string>& v, int t) {
    string aux;
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

    while (cin >> n) {
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        BubbleSort(v, n);

        for (int i = 0; i < n; i++) {
            cout << v[i] << "\n";
        }
    }

    return 0;
}
