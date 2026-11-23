#include "inputCore.h"
#include <bits/stdc++.h>
#include <thread>
using namespace std;
using namespace chrono_literals;
using this_thread::sleep_for;

int updateIndex(int i, int size, int &delta) {
    if (i + delta >= size) {
        delta = -abs(delta);
    } else if (i + delta < 0) {
        delta = abs(delta);
    }
    return i + delta;
}

int main() {
    int screenWidth = 200, screenHeight = 50;
    int deltaX = 4, deltaY = 2, x = 0, y = 0;
    string edge = string(screenWidth + 2, '-');
    vector<string> matriz(screenHeight + 2, string(screenWidth + 2, ' '));
    matriz[0] = edge;
    matriz[screenHeight + 1] = edge;

    while (true) {
        clear();
        for (int i = 0; i <= screenHeight + 1; i++) {
            for (int j = 0; j <= screenWidth + 1; j++) {
                if (i == y + 1 && j == x + 1) {
                    cout << 'O';
                } else {
                    cout << matriz[i][j];
                }
            }
            cout << "\n";
        }
        x = updateIndex(x, screenWidth, deltaX);
        y = updateIndex(y, screenHeight, deltaY);
        sleep_for(70ms);
    }

    return 0;
}
