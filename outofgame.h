#ifndef OUTOFGAME_H
#define OUTOFGAME_H

#include "pawn.h"


class OutOfGame: public QGraphicsItem
{
public:
    OutOfGame(std::shared_ptr<QGraphicsScene> scene);

private:

    std::vector<Pawn> whitePawns_;
    std::vector<Pawn> blackPawns_;

    std::shared_ptr<QGraphicsScene> scene_;

};

#endif // OUTOFGAME_H
