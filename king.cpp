#include "king.h"

king::king(std::shared_ptr<QGraphicsScene> scene, std::string color)
{
    scene_ = scene;
    setColor(color);
    addScene(scene);
    setPix("nappulat/kingBlack.png", "nappulat/kingWhite.png");

}

king::~king()
{
}

void king::move()
{
    return;
}

