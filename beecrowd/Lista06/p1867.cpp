// problem: 1867 - Maior Número de Um Algarismo

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> ns(2);
    while (cin >> ns[0] >> ns[1]) {
        if (ns[0] == "0" && ns[1] == "0") {
            return 0;
        }
        for (int i = 0; i < 2; i++) {
            while ((int)ns[i].size() > 1) {
                int nv = 0;
                for (char x : ns[i]) {
                    nv += x - '0';
                }
                ns[i] = to_string(nv);
            }
        }
        if (stoi(ns[0]) > stoi(ns[1])) {
            cout << "1\n";
        } else if (ns[0] < ns[1]) {
            cout << "2\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}
