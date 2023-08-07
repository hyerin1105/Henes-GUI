#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sec.h"
#include "third.h"
#include "stop.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_indoor_clicked()
{
    Sec indoor;
    indoor.setModal(true);
    indoor.exec();
}

void MainWindow::on_outdoor_clicked()
{
    third outdoor;
    outdoor.setModal(true);
    outdoor.exec();
}

void MainWindow::on_stop_clicked()
{
    stop stop;
    stop.setModal(true);
    stop.exec();
}
