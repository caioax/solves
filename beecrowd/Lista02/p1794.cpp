// problem: 1794 - Lavanderia

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, la, lb, sa, sb;

    cin >> n;
    cin >> la >> lb;
    cin >> sa >> sb;

    if (n < la || n > lb) {
        cout << "impossivel" << endl;
        return 0;
    }

    if (n < sa || n > sb) {
        cout << "impossivel" << endl;
        return 0;
    }

    cout << "possivel" << endl;

    return 0;
}
