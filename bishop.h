#ifndef BISHOP_H
#define BISHOP_H

#include "play_pawns.h"

class bishop: public Play_pawns
{
public:
    bishop(std::shared_ptr<QGraphicsScene> scene, std::string color);
    ~bishop();

    virtual void move();

private:
    std::string type_;
    std::shared_ptr<QGraphicsPixmapItem> drawingPtr_;
    std::shared_ptr<QGraphicsScene> scene_;

};

#endif // BISHOP_H
