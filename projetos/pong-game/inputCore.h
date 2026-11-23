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
