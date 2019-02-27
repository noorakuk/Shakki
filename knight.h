#ifndef KNIGHT_H
#define KNIGHT_H

#include "play_pawns.h"

class knight: public Play_pawns
{
public:
    knight(std::shared_ptr<QGraphicsScene> scene, std::string color);
    ~knight();

    virtual void move();

private:
    std::string type_;
    std::shared_ptr<QGraphicsPixmapItem> drawingPtr_;
    std::shared_ptr<QGraphicsScene> scene_;



};

#endif // KNIGHT_H
