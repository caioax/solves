// problem: 1877 - O Castelo de Neve de Sansa

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, sp = 0;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n - 1; i++) {
        if (v[i - 1] < v[i] && v[i] > v[i + 1]) sp++;
    }

    if (sp == k) {
        cout << "beautiful\n";
    } else {
        cout << "ugly\n";
    }

    return 0;
}
