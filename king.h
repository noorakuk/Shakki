#ifndef KING_H
#define KING_H

#include "play_pawns.h"

class king: public Play_pawns
{
public:
    king(std::shared_ptr<QGraphicsScene> scene, std::string color);
    ~king();

    virtual void move();

private:
    std::string type_;
    std::shared_ptr<QGraphicsPixmapItem> drawingPtr_;
    std::shared_ptr<QGraphicsScene> scene_;

};

#endif // KING_H
