#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, *x;
    cin >> n;
    x = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int m = n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (x[j - 1] > x[j]) swap(x[j - 1], x[j]);
        }
        m--;
    }

    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = 0; j < n; j++) {
            if (x[i] == x[j]) {
                soma += 1;
            }
        }
        if (x[i] != x[i + 1]) {
            cout << x[i] << " aparece " << soma << " vez(es)" << endl;
        }
    }

    free(x);

    return 0;
}
