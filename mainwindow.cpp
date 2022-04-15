#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //init
    /*
    matrix[0] = ui->pushButton;
    matrix[1] = ui->pushButton_2;
    matrix[2] = ui->pushButton_3;
    matrix[3] = ui->pushButton_4;
    matrix[4] = ui->pushButton_5;
    matrix[5] = ui->pushButton_6;
    matrix[6] = ui->pushButton_7;
    matrix[7] = ui->pushButton_8;
    matrix[8] = ui->pushButton_9;
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_reset_button_clicked()
{
    for(int i=0;i<8;i++){
        matrix[i]->setText(QString::number(i+1));
    }
}

void MainWindow::on_radioButton_clicked()
{
    searchType = 0;
}

void MainWindow::on_radioButton_2_clicked()
{
    searchType = 1;
}

void MainWindow::on_radioButton_4_clicked()
{
    searchType = 2;
}

void MainWindow::on_radioButton_5_clicked()
{
    searchType = 3;
}
