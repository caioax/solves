// problem: 1216 - Getline One

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    double q = 0;
    double r = 0;

    while (getline(cin, s)) {
        int x;
        q++;
        cin >> x;
        cin.ignore();
        r += x;
    }
    cout << fixed << setprecision(1);
    cout << r / q << "\n";

    return 0;
}
