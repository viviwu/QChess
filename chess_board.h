#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <QWidget>

class ChessBoard : public QWidget
{
  Q_OBJECT
public:
  explicit ChessBoard(QWidget *parent = nullptr);

protected:
  void paintEvent(QPaintEvent *event) override;

  void drawSinoChessBoard();
  void drawChessBoard();

signals:

};

#endif // CHESS_BOARD_H
