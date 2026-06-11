// problem: 1013 - O Maior

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, maior;

    cin >> a >> b >> c;

    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;

    cout << maior << " eh o maior" << endl;

    return 0;
}
