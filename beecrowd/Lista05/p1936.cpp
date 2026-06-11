// problem: 1936 - Fatorial

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s = 1;
    vector<int> v(10);
    v[0] = 1;
    for (int i = 2; i <= 10; i++) {
        s *= i;
        v[i - 1] = s;
    }

    int n, q = 0;
    cin >> n;

    for (int i = 0; i < 10; i++) {
        if (!n) break;
        if (v[i] > n) {
            n -= v[i - 1];
            i = 0;
            q++;
        }
    }
    cout << q << "\n";

    return 0;
}
