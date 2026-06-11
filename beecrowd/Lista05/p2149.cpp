// problem: 2149 - Sequência do Tio Phill Bonati

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> s(17);
    s[0] = 0;
    s[1] = 1;
    for (int i = 2; i < 17; i++) {
        if (i % 2 == 0) {
            s[i] = s[i - 2] + s[i - 1];
        } else {
            s[i] = s[i - 2] * s[i - 1];
        }
    }
    int n;
    while (cin >> n) {
        cout << s[n - 1] << "\n";
    }

    return 0;
}
