#include "queen.h"

queen::queen(std::shared_ptr<QGraphicsScene> scene, std::string color)
{
    setColor(color);
    addScene(scene);
    setPix("nappulat/queenBlack.png", "nappulat/queenWhite.png");

}

queen::~queen()
{
}

void queen::move()
{
    return;
}
