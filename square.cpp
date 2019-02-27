#include "square.h"


Square::Square(std::shared_ptr<QGraphicsScene> scene, std::string color, int x, int y)
{
   scene_ = scene;
   color_ = color;

   x_ = x;
   y_ = y;
}

void Square::drawSquare()
{

    int regX = x_ * 100;
    int regY = y_ * -100;

    if (color_ == "black") {
        setBrush(Qt::lightGray);

    } else {
        setBrush(Qt::white);

    }

    setRect(regX, regY, 100, 100);

    scene_.get()->addItem(this);
}

void Square::addPawn(std::shared_ptr<Play_pawns> pawn)
{
    pawn_ = pawn;
    pawn_->drawPawn(x_, y_);
}
