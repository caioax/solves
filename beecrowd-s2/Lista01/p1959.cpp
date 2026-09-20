#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll soma(int n, int l) {
    if (!l) return 0;

    return n + soma(n, l - 1);
}

int main() {
    int n, l;
    cin >> n >> l;
    cout << soma(n, l) << "\n";
    return 0;
}
