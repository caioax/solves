// problem: 2410 - Frequencia na Aula

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> l;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        l.insert(x);
    }
    cout << l.size() << "\n";

    return 0;
}
