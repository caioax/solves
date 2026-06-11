// problem: 1272 - Mensagem Oculta

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        char s[51];
        scanf(" %50[^\n]", s);

        if (s[0] != ' ') {
            cout << s[0];
        }

        int size = strlen(s);
        for (int i = 1; i < size; i++) {
            if (s[i - 1] == ' ' && s[i] != ' ') {
                cout << s[i];
            }
        }
        cout << "\n";
    }

    return 0;
}
