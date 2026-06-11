// problem: 2062 - OBI URI

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        if ((int)s.size() == 3 &&                                           //
            ((s[0] == 'O' && s[1] == 'B') || (s[0] == 'U' && s[1] == 'R'))  //
        ) {
            s[2] = 'I';
        }

        cout << s;
        if (!n) {
            cout << "\n";
        } else {
            cout << " ";
        }
    }

    return 0;
}
