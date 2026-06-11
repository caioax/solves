// problem: 1873 - Pedra-papel-tesoura-lagarto-Spock

#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    set<pair<string, string>> t = {
        {"tesoura", "papel"},
        {"papel", "pedra"},
        {"pedra", "lagarto"},
        {"lagarto", "spock"},
        {"spock", "tesoura"},
        {"tesoura", "lagarto"},
        {"lagarto", "papel"},
        {"papel", "spock"},
        {"spock", "pedra"},
        {"pedra", "tesoura"},
    };
    cin >> c;

    while (c--) {
        string r, s;
        cin >> r >> s;

        if (r == s) {
            cout << "empate" << endl;
            continue;
        }

        if (t.count({r, s})) {
            cout << "rajesh" << endl;
            continue;
        }

        cout << "sheldon" << endl;
    }
    return 0;
}
