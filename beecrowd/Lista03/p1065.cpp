// problem: 1065 - Pares entre Cinco Números

#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            n++;
        };
    }

    cout << n << " valores pares" << endl;

    return 0;
}
