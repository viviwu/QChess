//
// Created by 朱小争 on 10/21/23.
//

#include "main_window.h"

//#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
//    , ui(new Ui::MainWindow)
{
  //  ui->setupUi(this);

  chess_board = new ChessBoard(this);
  setCentralWidget(chess_board);
}

MainWindow::~MainWindow() {
    delete chess_board;
}