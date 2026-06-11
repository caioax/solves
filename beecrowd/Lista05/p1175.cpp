// problem: 1175 - Troca em Vetor I

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(20);

    for (int i = 0; i < 20; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << v[19 - i] << "\n";
    }

    return 0;
}
