#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "gameboard.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_exitButton_clicked();

private:
    Ui::MainWindow *ui;

    std::shared_ptr<QGraphicsScene> scene = std::make_shared<QGraphicsScene> ();

    std::shared_ptr<GameBoard> board_;


};

#endif // MAINWINDOW_H
