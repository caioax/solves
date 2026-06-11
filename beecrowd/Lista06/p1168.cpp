// problem: 1168 - LED

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> v = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    cin >> n;

    while (n--) {
        int r = 0;
        string s;
        cin >> s;

        for (char x : s) {
            r += v[x - '0'];
        }
        cout << r << " leds\n";
    }

    return 0;
}
