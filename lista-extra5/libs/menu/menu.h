#include <bits/stdc++.h>
using namespace std;

#ifdef _WIN32
#include <conio.h>
#endif

enum class Key { Up, Down, Enter, Other };

void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void enableRawMode() {
#ifndef _WIN32
    system("stty -icanon -echo");
#endif
}

void restoreTerminal() {
#ifndef _WIN32
    system("stty icanon echo");
#endif
}

Key readKey() {
#ifdef _WIN32
    int c = _getch();
    if (c == 13)
        return Key::Enter;
    if (c == 0 || c == 224) {
        int code = _getch();
        if (code == 72)
            return Key::Up;
        if (code == 80)
            return Key::Down;
    }
    return Key::Other;
#else
    int c = cin.get();
    if (c == '\n')
        return Key::Enter;
    if (c == 27 && cin.get() == '[') {
        int code = cin.get();
        if (code == 'A')
            return Key::Up;
        if (code == 'B')
            return Key::Down;
    }
    return Key::Other;
#endif
}

void endPag() {
    cin.get();
    clear();
}

void updateIndex(int &index, int size, string direction = "down") {
    if (direction == "down") {
        if (index >= size - 1)
            index = 0;
        else
            index += 1;
    } else {
        if (index <= 0)
            index = size - 1;
        else
            index -= 1;
    }
}

void buildOptions(const vector<pair<string, function<void()>>> &options,
                  int index) {
    for (int i = 0; i < (int)options.size(); i++) {
        if (i == index)
            cout << "  ▶ ";
        else
            cout << "   ";
        cout << i + 1 << ": " << options[i].first << "\n";
    }
}

void doNothing() { return; }

void menuCore(const vector<pair<string, function<void()>>> &options,
              int &index) {
    enableRawMode();
    while (true) {
        clear();
        buildOptions(options, index);
        cout << flush;

        Key key = readKey();
        if (key == Key::Up) {
            updateIndex(index, (int)options.size(), "up");
        } else if (key == Key::Down) {
            updateIndex(index, (int)options.size(), "down");
        } else if (key == Key::Enter) {
            break;
        }
    }
    restoreTerminal();
}

void drawMenu(const vector<pair<string, function<void()>>> &options) {

    int index = 0;
    while (true) {
        menuCore(options, index);
        clear();
        if (!options[index].second)
            break;
        options[index].second();
    }
}
