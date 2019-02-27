#ifndef PAWN_H
#define PAWN_H

#include "play_pawns.h"

class Pawn: public Play_pawns
{
public:
    Pawn(std::shared_ptr<QGraphicsScene> scene, std::string color);
    ~Pawn();

    virtual void move();

private:
    std::string type_;
    std::shared_ptr<QGraphicsPixmapItem> drawingPtr_;
    std::shared_ptr<QGraphicsScene> scene_;


};

#endif // PAWN_H
