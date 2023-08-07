#include "sec.h"
#include "ui_sec.h"
#include "stop.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Sec::Sec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sec)
{
    ui->setupUi(this);
}

Sec::~Sec()
{
    delete ui;
}
