// problem: 2165 - Tuitando

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if ((int)s.size() > 140) {
        cout << "MUTE\n";
    } else {
        cout << "TWEET\n";
    }

    return 0;
}
