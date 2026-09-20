#include <bits/stdc++.h>
using namespace std;

double precisao(int i) {
    if (!i) return 0;
    return 1 / (6 + precisao(i - 1));
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << 3 + precisao(n) << "\n";
    return 0;
}
