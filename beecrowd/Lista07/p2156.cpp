// problem: 2156 - As Aventuras de Pak-man

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, c, k;

    while (cin >> l >> c >> k && (l || c || k)) {
        cin.ignore();
        char m[l][c];
        int x, y, q = 0;

        map<char, pair<int, int>> direcoes = {
            {'L', {0, -1}},  //
            {'R', {0, 1}},   //
            {'U', {-1, 0}},  //
            {'D', {1, 0}}    //
        };
        auto [dx, dy] = direcoes['R'];

        for (int i = 0; i < l; i++) {
            string s;
            getline(cin, s);
            for (int j = 0; j < c; j++) {
                if (s[j] == '<') {
                    s[j] = ' ';
                    x = i;
                    y = j;
                }
                m[i][j] = s[j];
            }
        }

        for (int i = 0; i < k; i++) {
            char h;
            cin >> h;

            if (h != 'W') {
                pair<int, int> direcao = direcoes[h];
                dx = direcao.first;
                dy = direcao.second;
                continue;
            }

            int tx = x + dx, ty = y + dy;

            if (m[tx][ty] == '#') continue;

            if (m[tx][ty] == '*') {
                m[tx][ty] = ' ';
                q++;
            }
            x = tx;
            y = ty;
        }

        cout << q << "\n";
    }

    return 0;
}
