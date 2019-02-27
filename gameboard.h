#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include "square.h"
#include "outofgame.h"
#include "rook.h"
#include "knight.h"
#include "king.h"
#include "bishop.h"
#include "queen.h"

#include <iostream>
#include <map>


class GameBoard
{
public:
    GameBoard(std::shared_ptr<QGraphicsScene> scene);

    void initalization();

private:

    std::map<std::pair<int, int>, std::shared_ptr<Square>> squares_;

    std::map<int, std::shared_ptr<Pawn>> pawnMap_;

    std::shared_ptr<QGraphicsScene> scene_;

    bool checkIfEven(int one, int two);

    std::pair<std::string, std::string> checkPawn(int x, int y);

};

#endif // GAMEBOARD_H
