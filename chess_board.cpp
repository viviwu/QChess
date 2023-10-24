#include "chess_board.h"
#include <QPainter>
#include <QPalette>

ChessBoard::ChessBoard(QWidget *parent)
  : QWidget{parent}
{
  setStyleSheet("background-color: blue;");
//  QPalette palette;
//  palette.setColor(QPalette::Window, Qt::blue);
//  setPalette(palette);
//  setAutoFillBackground(true);
}

void ChessBoard::paintEvent(QPaintEvent *event)
{
  Q_UNUSED(event);

  QPainter painter(this);

          // 绘制棋盘格子的代码
  int gridSize = 50; // 每个格子的大小
  int numRows = 10; // 行数
  int numCols = 9; // 列数

  for (int row = 0; row < numRows; ++row) {
    for (int col = 0; col < numCols; ++col) {
      int x = col * gridSize;
      int y = row * gridSize;

              // 设置不同颜色的格子
      if ((row + col) % 2 == 0) {
        painter.fillRect(x, y, gridSize, gridSize, Qt::lightGray);
      } else {
        painter.fillRect(x, y, gridSize, gridSize, Qt::white);
      }
    }
  }
}
