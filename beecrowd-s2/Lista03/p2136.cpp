#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<string>& v, int t) {
    string aux;
    for (int i = 0; i < t; i++) {
        for (int j = t - 1; j > i; j--) {
            if (v[j] < v[j - 1]) {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

int main() {
    vector<string> vy, vn;
    string s, mn = "";
    while (cin >> s && s != "FIM") {
        string c;
        cin >> c;

        if (c == "YES") {
            if (s.size() > mn.size()) mn = s;
            vy.push_back(s);
        } else {
            vn.push_back(s);
        }
    }

    BubbleSort(vy, vy.size());
    BubbleSort(vn, vn.size());

    for (int i = 0; i < (int)vy.size(); i++) {
        if (!i) {
            cout << vy[i] << "\n";
        } else {
            if (vy[i - 1] != vy[i]) cout << vy[i] << "\n";
        }
    }

    for (int i = 0; i < (int)vn.size(); i++) {
        if (!i) {
            cout << vn[i] << "\n";
        } else {
            if (vn[i - 1] != vn[i]) cout << vn[i] << "\n";
        }
    }

    cout << "\nAmigo do Habay:\n" << mn << "\n";
    return 0;
}
