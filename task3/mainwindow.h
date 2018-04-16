#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);



    int num1,num2,num3,num4,num5,num6,num7;//課題の全体の量（ページ数や課題数）（進捗の分母になる）
    int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0;//終わった量　progressのp（進捗の分子になる）


    ~MainWindow();

private slots:

    void on_pushButton_released();

    void on_pushButton_2_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
