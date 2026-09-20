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

    while (cin >> n && n) {
        int index;
        vector<int> v(n), vm(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[i] = x;
            vm[i] = x;
        }

        BubbleSort(v, n);

        for (int i = 0; i < n; i++) {
            if (vm[i] == v[n - 2]) {
                index = i + 1;
                break;
            }
        }
        cout << index << "\n";
    }

    return 0;
}
