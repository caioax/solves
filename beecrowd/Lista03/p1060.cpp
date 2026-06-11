// problem: 1060 - Números Positivos

#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    for (int i = 0; i < 6; i++) {
        double x;
        cin >> x;
        if (x > 0) n++;
    }

    cout << n << " valores positivos" << endl;

    return 0;
}
