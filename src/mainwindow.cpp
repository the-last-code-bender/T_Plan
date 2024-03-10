#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{

}


void MainWindow::on_actionOpen_triggered()
{

}


void MainWindow::on_actionTransfer_triggered()
{

}


void MainWindow::on_actionSettings_triggered()
{

}


void MainWindow::on_actionAdd_triggered()
{

}


void MainWindow::on_actionFilter_triggered()
{

}

