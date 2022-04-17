#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    s = new MySearch(init_state,goal_state);

    table.push_back(ui->cell1);
    table.push_back(ui->cell2);
    table.push_back(ui->cell3);
    table.push_back(ui->cell4);
    table.push_back(ui->cell5);
    table.push_back(ui->cell6);
    table.push_back(ui->cell7);
    table.push_back(ui->cell8);
    table.push_back(ui->cell9);
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
    setTable(init_state);
}

void MainWindow::on_pushButton_2_clicked()
{

}


void MainWindow::setTable(string &s){
    for(int i = 0;i<9;i++){
        if(s[i] == '0') table[i]->setText("");
        else table[i]->setText(QString(s[i]));
    }
}
