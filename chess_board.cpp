#include "chess_board.h"

#include <QPainter>
#include <QPalette>

ChessBoard::ChessBoard(QWidget *parent) : QWidget{parent} {
  setStyleSheet("background-color: blue;");
  //  QPalette palette;
  //  palette.setColor(QPalette::Window, Qt::blue);
  //  setPalette(palette);
  //  setAutoFillBackground(true);
}

void ChessBoard::paintEvent(QPaintEvent *event) {
  Q_UNUSED(event);
  QPainter painter(this);
  // 绘制棋盘背景
  painter.setBrush(Qt::yellow);
  painter.drawRect(0, 0, width(), height());

  const float gs = qMin(width(), height()) / 9;  // //grid szie
  const float x0 = gs/2, y0 = gs/2;
  const float bw = gs*9 , bh = gs*8;
  // 绘制棋盘网格
  painter.setPen(Qt::black);
  for (int i = 0; i < 9; ++i) {
    int y = y0 + gs * i;
    painter.drawLine(x0, y, x0+gs*4, y);
    painter.drawLine(x0+gs*5, y, x0+bw, y);
  }
  for (int i = 0; i < 10; ++i) {
    int x = x0 + gs * i;
    painter.drawLine(x, y0, x, y0+bh);
  }

  // 设置圆心坐标和半径
  QPointF center(100, 100);
  qreal radius = 25;

  // 设置画笔和画刷
  painter.setPen(Qt::red);
  painter.setBrush(Qt::red);

  // 画圆
  painter.drawEllipse(center, radius, radius);

  painter.save();
  // 设置字体和字号
  QFont font("Arial", 20);
  painter.setFont(font);

  // 在圆心写字
  painter.setPen(Qt::green);
//  painter.drawText(center, "车");
  // 设置绘制文本的矩形区域，使其在圆内居中
  QRectF textRect(center.x() - radius, center.y() - radius, 2 * radius, 2 * radius);

  // 在圆心写字，居中绘制
  painter.drawText(textRect, Qt::AlignCenter, "车");
  
  painter.restore();

}

void ChessBoard::drawSinoChessBoard() {}

void ChessBoard::drawChessBoard() {
  QPainter painter(this);

  // 绘制棋盘格子的代码
  int gridSize = 50;  // 每个格子的大小
  int numRows = 10;   // 行数
  int numCols = 9;    // 列数

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