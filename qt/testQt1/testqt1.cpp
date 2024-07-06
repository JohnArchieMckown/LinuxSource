#include "testqt1.h"
#include "./ui_testqt1.h"

#include <QDateTime>
#include <QTimer>

QString statusboxExtraText = ""; // just too stupid to figure out how to avoid a global

testQt1::testQt1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testQt1)
{
    ui->setupUi(this);
    ui->Password->clear();
    ui->UserID->clear();
    ui->UserID->setFocus();
    ui->HidePassword->setChecked(true);
    ui->Verify_User_Password->setEnabled(false);
    QTimer *timer = new QTimer(this);
    showTime();
    connect(timer, &QTimer::timeout, this, &testQt1::showTime);
    timer->setInterval(1000);
    timer->start();
}

testQt1::~testQt1()
{
    delete ui;
}

void testQt1::clearExtraText()
{
    statusboxExtraText = "";
}

void testQt1::showTime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh:mm:ss ") + statusboxExtraText;
    ui->statusbar->showMessage(time_text);
}

void testQt1::on_pushButton_pressed()
{
    ui->Result->setText("Pressed");
    ui->pushButton->setText("Release Me");
}

void testQt1::on_pushButton_released()
{
    ui->Result->setText("Released");
    ui->pushButton->setText("Press Me");
}

void testQt1::on_CloseButton_clicked()
{
    close();
}

void testQt1::on_actionAbout_triggered()
{
    QString aboutText = "";
    aboutText += "Version:\t0.1\n";
    aboutText += "Author:\tJohn Archie McKown\n";
    aboutText += "Date:\t2024-06-30";
    QMessageBox::about(this, "About", aboutText);
}

void testQt1::on_Verify_User_Password_clicked()
{
    QString pass = ui->Password->text();
    QString user = ui->UserID->text();
    statusboxExtraText = "User:" + user + " successfully logged on.";
    //  ui->statusbar->showMessage(LoginInfo, 10000); // 10 seconds
    ui->UserID->clear();
    ui->Password->clear();
    ui->UserID->setFocus();
    QTimer::singleShot(10000, this, &testQt1::clearExtraText);
}

void testQt1::on_HidePassword_clicked()
{
    if (ui->HidePassword->isChecked()) {
        ui->Password->setEchoMode(QLineEdit::Password);
    } else {
        ui->Password->setEchoMode(QLineEdit::Normal);
    }
}

void testQt1::on_actionAboutQt_triggered()
{
    QApplication::aboutQt();
};

void testQt1::on_UserID_textChanged(const QString &arg1)
{
    bool UserPassword = false;
    UserPassword = (0 != ui->Password->text().length()) && (0 != arg1.length());
    ui->Verify_User_Password->setEnabled(UserPassword);
}

void testQt1::on_Password_textChanged(const QString &arg1)
{
    bool UserPassword = false;
    UserPassword = (0 != arg1.length()) && (0 != ui->UserID->text().length());
    ui->Verify_User_Password->setEnabled(UserPassword);
}
