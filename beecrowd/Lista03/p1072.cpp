// problem: 1072 - Intervalo 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, in = 0, out = 0;
    cin >> n;
    while (n--) {
        int input;
        cin >> input;

        if (input < 10 || input > 20) {
            out++;
            continue;
        }
        in++;
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}
