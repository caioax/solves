// problem: 1171 - Frequência de Números

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> m;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        m[x]++;
    }
    for (const auto& [c, v] : m) {
        cout << c << " aparece " << v << " vez(es)\n";
    }

    return 0;
}
