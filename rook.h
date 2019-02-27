#ifndef ROOK_H
#define ROOK_H

#include "play_pawns.h"

class rook: public Play_pawns
{
public:
    rook(std::shared_ptr<QGraphicsScene> scene, std::string color);
    ~rook();

    virtual void move();

private:
    std::string type_;
    std::shared_ptr<QGraphicsPixmapItem> drawingPtr_;
    std::shared_ptr<QGraphicsScene> scene_;

};

#endif // ROOK_H
