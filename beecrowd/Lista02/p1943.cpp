// problems: 1943 - Top N

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> tops = {1, 3, 5, 10, 25, 50, 100};
    int n;

    cin >> n;

    for (int top : tops) {
        if (n <= top) {
            cout << "Top " << top << endl;
            break;
        }
    }
    return 0;
}
