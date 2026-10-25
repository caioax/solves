#include "pilha.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    string s;
    while (cin >> s) {
        pilha p;
        create(&p);

        bool b = false;
        for (char x : s) {
            if (x == ')' && isEmpty(p)) {
                b = true;
                break;
            }

            if (x == '(') {
                push(&p, x);
            } else if (x == ')') {
                pop(&p, &n);
            }
        }

        if (b || !isEmpty(p)) {
            cout << "incorrect\n";
        } else {
            cout << "correct\n";
        }
    }
    return 0;
}
