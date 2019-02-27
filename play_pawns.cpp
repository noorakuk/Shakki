#include "play_pawns.h"


Play_pawns::Play_pawns()
{
}

void Play_pawns::drawPawn(int x, int y)
{

    // Which color the pawn is and then draw the pawn
    if ( getColor() == "black" )
    {
        auto pixmap = QPixmap(filenameBlack_);
        setPixmap(pixmap.scaled(100, 100));

    } else
    {
        auto pixmap = QPixmap(filenameWhite_);
        setPixmap(pixmap.scaled(100, 100));
    }

    setPos(x*100, y*-100);

    scene_.get()->addItem(this);

}

void Play_pawns::addScene(std::shared_ptr<QGraphicsScene> scene)
{
    scene_ = scene;
}

void Play_pawns::setPix(QString filenameB, QString filenameW)
{
    filenameWhite_ = filenameW;
    filenameBlack_ = filenameB;
}



void Play_pawns::setColor(std::string color)
{
    color_ = color;
}

std::string Play_pawns::getColor() const
{
    return color_;
}
