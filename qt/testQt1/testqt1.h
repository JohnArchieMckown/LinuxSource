#ifndef TESTQT1_H
#define TESTQT1_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class testQt1;
}
QT_END_NAMESPACE

class testQt1 : public QMainWindow
{
    Q_OBJECT

public:
    testQt1(QWidget *parent = nullptr);
    ~testQt1();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_released();

    void on_CloseButton_clicked();

    void on_actionAbout_triggered();

    void on_Verify_User_Password_clicked();

    void on_HidePassword_clicked();

    void on_actionAboutQt_triggered();

    void on_UserID_textChanged(const QString &arg1);

    void on_Password_textChanged(const QString &arg1);

    void showTime(); // manual addition

    void clearExtraText(); // manual addition

private:
    Ui::testQt1 *ui;
};
#endif // TESTQT1_H
