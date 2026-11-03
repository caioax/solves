#include "fila.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;

    fila f;
    create(&f);
    insert(&f, 1);

    int c = 0, pos;
    while (true) {
        remove(&f, &pos);
        pos = (pos * 2) % (p + 1);
        c++;
        if (pos == 1)
            break;
        insert(&f, pos);
    }

    cout << c << "\n";
    return 0;
}
