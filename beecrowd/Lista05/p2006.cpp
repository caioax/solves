// problem: 2006 - Identificando o Chá

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, r = 0;
    cin >> a;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if (x == a) r++;
    }

    cout << r << "\n";

    return 0;
}
