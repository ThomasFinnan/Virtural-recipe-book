#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

}


void MainWindow::on_Button1_clicked(Qlabel1, Qrecipe1, Qlabel2, Qrecipe2, Qlabel3, Qrecipe3, Qlabel4, Qrecipe4)
{
    QLabel1 show;
    Qrecipe1 show;
    QLabel2 hide;
    Qrecipe2 hide;
    QLabel3 hide;
    Qrecipe3 hide;
    QLabel4 hide;
    Qrecipe4 hide;
}


void MainWindow::on_Button2_clicked(Qlabel1, Qrecipe1, Qlabel2, Qrecipe2, Qlabel3, Qrecipe3, Qlabel4, Qrecipe4)
{
    QLabel2 show;
    Qrecipe2 show;
    QLabel1 hide;
    Qrecipe1 hide;
    QLabel3 hide;
    Qrecipe3 hide;
    QLabel4 hide;
    Qrecipe4 hide;
}


void MainWindow::on_Button3_clicked(label1, recipe1, label2, recipe2, label3, recipe3, label4, recipe4)
{
    Label3 show;
    recipe3 show;
    Label1 hide;
    recipe1 hide;
    Label2 hide;
    recipe2 hide;
    Label4 hide;
    recipe4 hide;
}


void MainWindow::on_Button4_clicked(Qlabel1, Qrecipe1, Qlabel2, Qrecipe2, Qlabel3, Qrecipe3, Qlabel4, Qrecipe4)
{
    QLabel4 show;
    Qrecipe4 show;
    QLabel1 hide;
    Qrecipe1 hide;
    QLabel2 hide;
    Qrecipe2 hide;
    QLabel3 hide;
    Qrecipe3 hide;
}

