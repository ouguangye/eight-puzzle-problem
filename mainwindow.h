#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<string>
#include <QMainWindow>
#include <QPushButton>
#include "mysearch.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    int searchType;
    string init_state = "123456780";
    const string goal_state = "123456780";
    MySearch* s;
};
#endif // MAINWINDOW_H
