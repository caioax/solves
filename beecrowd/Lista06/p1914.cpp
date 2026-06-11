// problem: 1914 - De Quem é a Vez?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string a, b, c, d;
        int x, y;
        cin >> a >> b >> c >> d >> x >> y;
        map<string, string> t = {{b, a}, {d, c}};

        if ((x + y) % 2 == 0) {
            cout << t["PAR"] << "\n";
        } else {
            cout << t["IMPAR"] << "\n";
        }
    }

    return 0;
}
