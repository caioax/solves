// problem: 1044 - Múltiplos

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a > b) swap(a, b);

    if (b % a != 0) {
        cout << "Nao sao Multiplos" << endl;
        return 0;
    }

    cout << "Sao Multiplos" << endl;
    return 0;
}
