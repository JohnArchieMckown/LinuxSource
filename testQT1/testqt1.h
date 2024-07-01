#ifndef TESTQT1_H
#define TESTQT1_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class testQT1;
}
QT_END_NAMESPACE

class testQT1 : public QMainWindow
{
    Q_OBJECT

public:
    testQT1(QWidget *parent = nullptr);
    ~testQT1();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_released();

    void on_CloseButton_clicked();

    void on_actionAbout_triggered();

private:
    Ui::testQT1 *ui;
};
#endif // TESTQT1_H
