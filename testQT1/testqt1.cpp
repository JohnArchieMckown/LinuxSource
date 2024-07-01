#include "testqt1.h"
#include "./ui_testqt1.h"

testQT1::testQT1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testQT1)
{
    ui->setupUi(this);
}

testQT1::~testQT1()
{
    delete ui;
}

void testQT1::on_pushButton_pressed()
{
    ui->Result->setText("Pressed");
    ui->pushButton->setText("Release Me");
}

void testQT1::on_pushButton_released()
{
    ui->Result->setText("Released");
    ui->pushButton->setText("Press Me");
}

void testQT1::on_CloseButton_clicked()
{
    close();
}

void testQT1::on_actionAbout_triggered()
{
    QString aboutText = "";
    aboutText += "Version:\t0.1\n";
    aboutText += "Author:\tJohn Archie McKown\n";
    aboutText += "Date:\t2024-06-30";
    QMessageBox::about(this, "About", aboutText);
}
