
#ifndef Q_MOC_RUN
#include <QApplication>
#include "dialog.h"
#endif

int main(int argc, char **argv)
{
  QApplication app(argc, argv);
  Dialog dialog;
  dialog.show();
  return app.exec();
  return 0;
}
