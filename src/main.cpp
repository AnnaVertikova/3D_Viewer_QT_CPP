#include <QApplication>

#include "view/mainwindow.h"
#include "view/myopenglwidget.h"


int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  s21::Model model;
  s21::Controller controller(&model);
  s21::MainWindow mw(&controller);
  mw.setWindowTitle("3DViewer_v2.0");
  mw.show();
  return app.exec();

}
