#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myid = new QLabel(this);
    myid->setText(tr("2018214789"));
    myid->setGeometry(0,0,1800,100);
    myid->setStyleSheet("color:black");
    myid->setStyleSheet("background:rgb(240,245,240)");
    myid->setContentsMargins(400,0,0,0);
}

MainWindow::~MainWindow()
{

    delete ui;
}

