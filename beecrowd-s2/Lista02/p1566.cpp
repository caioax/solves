#include <bits/stdc++.h>
using namespace std;

int main() {
    int nc;
    cin >> nc;

    while (nc--) {
        int *ms, n;
        cin >> n;
        ms = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            ms[i] = h;
        }

        sort(ms, ms + n);

        bool first = true;
        for (int i = 0; i < n; i++) {
            if (!first) cout << ' ';
            cout << ms[i];
            first = false;
        }
        cout << "\n";
        free(ms);
    }

    return 0;
}
