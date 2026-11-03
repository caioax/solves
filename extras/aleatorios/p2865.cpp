// problem: 2865 - Palíndromo Binário

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x, i = 0, j = 0;
        vector<char> operacoes = {'+', '-', 'x', '/'};
        cin >> x;

        while (true) {
            int h = x;

            switch (operacoes[j]) {
                case '+':
                    h += i;
                    break;
                case '-':
                    h -= i;
                    break;
                case 'x':
                    if (i) h *= i;
                    break;
                case '/':
                    if (i) h /= i;
                    break;
            }

            string s1 = bitset<32>(h).to_string();
            s1.erase(0, s1.find_first_not_of('0'));
            if (s1.empty()) s1 = "0";
            string s2 = s1;
            reverse(s2.begin(), s2.end());

            if (s1 == s2) {
                if (i) {
                    cout << operacoes[j] << ' ' << i << "\n";
                } else {
                    cout << "*\n";
                }
                break;
            }

            j = (j + 1) % 4;

            if (!j) i++;
        }
    }

    return 0;
}
