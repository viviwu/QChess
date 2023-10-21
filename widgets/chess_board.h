//
// Created by 朱小争 on 10/21/23.
//

#ifndef QTCXX_CHESS_BOARD_H
#define QTCXX_CHESS_BOARD_H

#include <QWidget>
#ifndef ChessBoard_H
#define ChessBoard_H

#include <QWidget>

class ChessBoard : public QWidget
{
    Q_OBJECT
public:
    explicit ChessBoard(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // ChessBoard_H



#endif  // QTCXX_CHESS_BOARD_H
