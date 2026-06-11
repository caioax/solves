// problem: 1176 - Fibonacci em Vetor

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> s(61);
    s[0] = 0;
    s[1] = 1;
    for (int i = 2; i < 61; i++) {
        s[i] = s[i - 1] + s[i - 2];
    }

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << "Fib(" << n << ") = " << s[n] << "\n";
    }

    return 0;
}
