//
// Created by 朱小争 on 10/21/23.
//

#ifndef QTCXX_MAIN_WINDOW_H
#define QTCXX_MAIN_WINDOW_H

#include <QMainWindow>
#include "chess_board.h"


class MainWindow : public QMainWindow {
  Q_OBJECT
  public:
  explicit MainWindow(QWidget *parent = nullptr);

  ~MainWindow();

  protected:
  //    void paintEvent(QPaintEvent *event) override;

  //  private slots:

  // signals:
  private:
      ChessBoard *chess_board;
};

#endif  // QTCXX_MAIN_WINDOW_H
