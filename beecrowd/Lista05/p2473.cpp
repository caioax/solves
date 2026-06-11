// problem: 2473 - Loteria

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> t = {"azar", "terno", "quadra", "quina", "sena"};
    set<int> a;
    int c = 0;
    for (int i = 0; i < 6; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < 6; i++) {
        int x;
        cin >> x;
        if (a.count(x)) c++;
    }
    c -= 2;
    if (c < 0) c = 0;
    cout << t[c] << "\n";
}
