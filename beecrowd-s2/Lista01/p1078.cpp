#include <bits/stdc++.h>
using namespace std;

int tabuada(int n, int r) {
    if (r > 10) return 0;
    cout << r << " x " << n << " = " << r * n << "\n";
    return tabuada(n, r + 1);
}

int main() {
    int n;
    cin >> n;
    tabuada(n, 1);
    return 0;
}
