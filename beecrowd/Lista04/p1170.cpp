// problem: 1170 - Blobs

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        double c;
        int s = 0;
        cin >> c;

        while (c > 1) {
            s++;
            c /= 2;
        }

        cout << s << " dias" << "\n";
    }

    return 0;
}
