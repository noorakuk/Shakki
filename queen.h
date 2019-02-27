#ifndef QUEEN_H
#define QUEEN_H

#include "play_pawns.h"

class queen: public Play_pawns
{
public:
    queen(std::shared_ptr<QGraphicsScene> scene, std::string color);
    ~queen();

    virtual void move();
};

#endif // QUEEN_H
