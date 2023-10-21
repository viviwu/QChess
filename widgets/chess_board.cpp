//
// Created by 朱小争 on 10/21/23.
//

#include "chess_board.h"

#include <QPainter>

ChessBoard::ChessBoard(QWidget *parent) : QWidget(parent)
{
  setFixedSize(500, 500); // 设置棋盘大小
}

void ChessBoard::paintEvent(QPaintEvent *event)
{
  Q_UNUSED(event);
  qDebug()<<__FUNCTION__ ;
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);

  int squareSize = width() / 9; // 每个棋盘格的大小

  // 绘制棋盘
  for (int row = 0; row < 10; ++row)
  {
    for (int col = 0; col < 9; ++col)
    {
      if ((row + col) % 2 == 0)
        painter.setBrush(Qt::lightGray);
      else
        painter.setBrush(Qt::white);

      painter.drawRect(col * squareSize, row * squareSize, squareSize, squareSize);
    }
  }

  // 绘制棋盘边框
  painter.setPen(Qt::black);
  painter.drawRect(0, 0, width() - 1, height() - 1);
}