#include "stop.h"
#include "ui_stop.h"

stop::stop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stop)
{
    ui->setupUi(this);
}

stop::~stop()
{
    delete ui;
}
