// problem: 1074 - Par ou Ímpar

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        string pi;
        cin >> x;

        if (x == 0) {
            cout << "NULL" << endl;
            continue;
        }

        if (x % 2 == 0) {
            pi = "EVEN";
        } else {
            pi = "ODD";
        }

        if (x > 0) {
            cout << pi << " POSITIVE" << endl;
        } else {
            cout << pi << " NEGATIVE" << endl;
        }
    }

    return 0;
}
