#include "pilha.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        pilha p;
        int q = 0;
        create(&p);

        for (char x : s) {
            if (x == '<') {
                push(&p, x);
            } else if (x == '>' && !isEmpty(p)) {
                q++;
                pop(&p, &i);
            }
        }
        cout << q << "\n";
    }
    return 0;
}
