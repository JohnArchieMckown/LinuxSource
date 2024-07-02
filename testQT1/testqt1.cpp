#include "testqt1.h"
#include "./ui_testqt1.h"

testQT1::testQT1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testQT1)
{
    ui->setupUi(this);
    ui->Password->setEchoMode(QLineEdit::Password);
    ui->Password->clear();
    ui->Password->clear();
    ui->HidePassword->setChecked(true);
    ui->Verify_User_Password->setEnabled(false);
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

void testQT1::on_Verify_User_Password_clicked()
{
    QString pass = ui->Password->text();
    QString user = ui->UserID->text();
    QString LoginInfo = "User:" + user + " successfully logged on.";
    ui->statusbar->showMessage(LoginInfo, 10000);
    ui->UserID->clear();
    ui->Password->clear();
    ui->Verify_User_Password->setEnabled(false);
}

void testQT1::on_HidePassword_clicked()
{
    if (ui->HidePassword->isChecked()) {
        ui->Password->setEchoMode(QLineEdit::Password);
    } else {
        ui->Password->setEchoMode(QLineEdit::Normal);
    }
}

void testQT1::on_UserID_editingFinished()
{
    bool UserPassword = false;
    UserPassword = (0 != ui->Password->text().length()) && (0 != ui->UserID->text().length());
    ui->Verify_User_Password->setEnabled(UserPassword);
}

void testQT1::on_Password_editingFinished()
{
    bool UserPassword = false;
    UserPassword = (0 != ui->Password->text().length()) && (0 != ui->UserID->text().length());
    ui->Verify_User_Password->setEnabled(UserPassword);
}
