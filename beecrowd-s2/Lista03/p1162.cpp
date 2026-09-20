#include <bits/stdc++.h>
using namespace std;

int BubbleSort(vector<int> v, int l) {
    int aux, c = 0;
    for (int i = 0; i < l; i++) {
        for (int j = l - 1; j > i; j--) {
            if (v[j] < v[j - 1]) {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
                c++;
            }
        }
    }
    return c;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int l;
        cin >> l;
        vector<int> v(l);

        for (int i = 0; i < l; i++) {
            cin >> v[i];
        }

        cout << "Optimal train swapping takes " << BubbleSort(v, l)
             << " swaps.\n";
    }

    return 0;
}
