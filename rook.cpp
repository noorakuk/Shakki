#include "rook.h"

rook::rook(std::shared_ptr<QGraphicsScene> scene, std::string color)
{
    scene_ = scene;
    setColor(color);
    addScene(scene);
    setPix("nappulat/rookBlack.png", "nappulat/rookWhite.png");

}

rook::~rook()
{
}

void rook::move()
{
    return;
}
