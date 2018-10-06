#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QPixmap>
#include <QPen>
#include <QColor>
#include <QPainter>
#include "decorator.h"
#include "elementx.h"
#include "elementy.h"
#include "elementz.h"
#include "pistola.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pixmap=new QPixmap(400,300);
    pixmap->fill();


    QColor color("black");
    lapiz=new QPen(color);


    ui->l_area->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    q->setPen(*lapiz);
    pis=new pistola();
}

MainWindow::~MainWindow()
{
    delete ui;
}
widget* MainWindow::create(bool x,bool y,bool z){
    widget* tmp;
    if(x)
        tmp=new elementy(pis);
    if(y)
        tmp=new elementz(pis);
    if(z)
        tmp=new elementx(pis);
    return tmp;
}
void MainWindow::on_pushButton_clicked()
{
    create(ui->mira->isChecked(),ui->largo->isChecked(),ui->culata->isChecked());
}
