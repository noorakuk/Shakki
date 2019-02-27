#include "pawn.h"

Pawn::Pawn(std::shared_ptr<QGraphicsScene> scene, std::string color)
{
    scene_ = scene;
    setColor(color);
    addScene(scene);
    setPix("nappulat/soldierBlack.png", "nappulat/soldierWhite.png");

}

Pawn::~Pawn()
{
}


void Pawn::move()
{
    return;
}

