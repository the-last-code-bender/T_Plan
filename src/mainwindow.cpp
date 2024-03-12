#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->hide();
    page_state=0;filter_state=0;
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

void MainWindow::on_actionCalender_triggered()
{
    if(page_state){
        ui->stackedWidget->setCurrentIndex(0);
        page_state=0;
    }
    else{
        ui->stackedWidget->setCurrentIndex(1);
        page_state=1;
    }
}

void MainWindow::on_actionFilter_triggered()
{
    if(filter_state){
        ui->widget->hide();
        filter_state=0;
    }
    else{
        ui->widget->show();
        filter_state=1;
    }
}




