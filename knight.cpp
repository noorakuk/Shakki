#include "knight.h"

knight::knight(std::shared_ptr<QGraphicsScene> scene, std::string color)
{
    scene_ = scene;
    setColor(color);
    addScene(scene);
    setPix("nappulat/horseBlack.png", "nappulat/horseWhite.png");

}

knight::~knight()
{
}

void knight::move()
{
    return;
}

