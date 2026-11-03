#include <bits/stdc++.h>
using namespace std;

enum class Color { White, Black };

struct Position {
    int x, y;
};

class Board;

class Piece {
  protected:
    const Color color;
    bool moved = false;

  public:
    Piece(Color color) : color(color) {}
    virtual ~Piece() = default;

    Color getColor() const {
        return color;
    }
    bool hasMoved() const {
        return moved;
    }
    void markMoved() {
        moved = true;
    }

    virtual string getSymbol() const = 0;
    virtual bool canMove(Position from, Position to, const Board &board) const = 0;
};
