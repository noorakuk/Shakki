#ifndef SQUARE_H
#define SQUARE_H

#include "play_pawns.h"

#include <QGraphicsScene>


class Square: public QGraphicsRectItem
{
public:
    Square(std::shared_ptr<QGraphicsScene> scene, std::string color, int x, int y);

    void drawSquare();

    void addPawn(std::shared_ptr<Play_pawns> pawn);

    void eatPawn();

    void removePawn();

private:
    int x_;
    int y_;

    std::shared_ptr<QGraphicsScene> scene_;
    std::string color_;

    std::shared_ptr<Play_pawns> pawn_;
};

#endif // SQUARE_H
