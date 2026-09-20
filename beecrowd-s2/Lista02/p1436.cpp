#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, caso = 1;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, tam = 0;
        cin >> n;
        int* id;
        id = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            cin >> id[j];
        }
        tam = n / 2;
        cout << "Case " << caso << ": " << id[tam] << endl;
        caso = caso + 1;
        free(id);
    }

    return 0;
}
