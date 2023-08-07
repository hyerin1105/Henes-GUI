#ifndef STOP_H
#define STOP_H

#include <QDialog>

namespace Ui {
class stop;
}

class stop : public QDialog
{
    Q_OBJECT

public:
    explicit stop(QWidget *parent = 0);
    ~stop();

private:
    Ui::stop *ui;
};

#endif // STOP_H
