#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    s = new MySearch(init_state,goal_state);
}

MainWindow::~MainWindow()
{
    delete s;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    init_state = "123456780";
    srand((unsigned)time(0));
    random_shuffle(init_state.begin(),init_state.end());
}

void MainWindow::on_pushButton_2_clicked()
{

}
