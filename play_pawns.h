#ifndef PLAY_PAWNS_H
#define PLAY_PAWNS_H

#include <string>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <memory>

class Play_pawns: public QGraphicsPixmapItem
{

public:

    Play_pawns();
    virtual ~Play_pawns() = default;

    virtual void move() = 0;

    void drawPawn(int x, int y);

    void addScene(std::shared_ptr<QGraphicsScene>);

    void setPix(QString filenameB, QString filenameW);

    void setColor(std::string color);

    std::string getColor() const;

private:

    std::string color_;
    QString filenameBlack_;
    QString filenameWhite_;
    std::shared_ptr<QGraphicsScene> scene_;

};

#endif // PLAY_PAWNS_H
