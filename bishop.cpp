#include "bishop.h"

bishop::bishop(std::shared_ptr<QGraphicsScene> scene, std::string color)
{
    scene_ = scene;
    setColor(color);
    addScene(scene);
    setPix("nappulat/bishopBlack.png", "nappulat/bishopWhite.png");

}

bishop::~bishop()
{

}



void bishop::move()
{
    return;
}

