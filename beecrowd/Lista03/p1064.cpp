// problem: 1064 - Positivos e Média

#include <bits/stdc++.h>
using namespace std;
int n;
double s;

int main() {
    for (int i = 0; i < 6; i++) {
        double x;
        cin >> x;
        if (x > 0) {
            n++;
            s += x;
        };
    }

    cout << fixed << setprecision(1);
    cout << n << " valores positivos" << endl;
    cout << (s / n) << endl;

    return 0;
}
