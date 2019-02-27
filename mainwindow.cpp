#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(scene.get());

    // Create the game board
    board_ = std::make_shared<GameBoard> (scene);

    // Initalize the game board
    board_->initalization();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exitButton_clicked()
{
    // If the button is pushed, the game ends
    board_->~GameBoard();
    std::exit(EXIT_SUCCESS);
}
