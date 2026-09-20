#include <bits/stdc++.h>
using namespace std;

int fibonaci(int a, int b, int n) {
    if (!n) return b;

    return fibonaci(b, a + b, n - 1);
}

int main() {
    int n;
    while (cin >> n && n) {
        cout << fibonaci(0, 1, n) << "\n";
    }

    return 0;
}
