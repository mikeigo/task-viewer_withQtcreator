#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->l1->setNum(0);
    ui->l2->setNum(0);
    ui->l3->setNum(0);
    ui->l4->setNum(0);
    ui->l5->setNum(0);
    ui->l6->setNum(0);
    ui->l7->setNum(0);//進捗の割合を0で初期化

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_released()
{
    int now=ui->spinBox_choose->value(); //1個目のスピンボックスで選択された課題番号

    int p=ui->spinBox_page->value();//2個目のスピンボックスから送られる進んだ量

    if(now==1)
    {num1=ui->spinBox_1->value(); //右横に設置されてるスピンボックスから課題の全体の量をえる
        ui->progressBar_1->setValue(100*(p+p1)/num1);//バーに表示
        ui->l1->setNum(100*(p+p1)/num1);//百分率で表示。切り捨てられるのでおおよその値。
        p1=p+p1;}//累積の進捗p1を更新
    if(now==2)
    {num2=ui->spinBox_2->value();
        ui->progressBar_2->setValue(100*(p+p2)/num2);
        ui->l2->setNum(100*(p+p2)/num2);
        p2=p+p2;}
    if(now==3)
    {num3=ui->spinBox_3->value();
        ui->progressBar_3->setValue(100*(p+p3)/num3);
        ui->l3->setNum(100*(p+p3)/num3);
        p3=p+p3;}
    if(now==4)
    {num4=ui->spinBox_4->value();
        ui->progressBar_4->setValue(100*(p+p4)/num4);
        ui->l4->setNum(100*(p+p4)/num4);
        p4=p+p4;}
    if(now==5)
    {num5=ui->spinBox_5->value();
        ui->progressBar_5->setValue(100*(p+p5)/num5);
        ui->l5->setNum(100*(p+p5)/num5);
        p5=p+p5;}
    if(now==6)
    {num6=ui->spinBox_6->value();
        ui->progressBar_6->setValue(100*(p+p6)/num6);
        ui->l6->setNum(100*(p+p6)/num6);
        p6=p+p6;}
    if(now==7)
    {num7=ui->spinBox_7->value();
        ui->progressBar_7->setValue(100*(p+p7)/num7);
        ui->l7->setNum(100*(p+p7)/num7);
        p7=p+p7;}


}

void MainWindow::on_pushButton_2_released()
{
    int now=ui->spinBox_choose->value();
            //resetボタンが押されたら、選択された課題の累積の進捗pnを0に変更。バー・百分率の表示も0にする

    if(now==1){
        p1=0;
        ui->progressBar_1->setValue(p1);
        ui->l1->setNum(0);}
    if(now==2){
        p2=0;
        ui->progressBar_2->setValue(p2);
        ui->l2->setNum(0);}
    if(now==3){
        p3=0;
        ui->progressBar_3->setValue(p3);
        ui->l3->setNum(0);}
    if(now==4){
        p4=0;
        ui->progressBar_4->setValue(p4);
        ui->l4->setNum(0);}
    if(now==5){
        p5=0;
        ui->progressBar_5->setValue(p5);
        ui->l5->setNum(0);}
    if(now==6){
        p6=0;
        ui->progressBar_6->setValue(p6);
        ui->l6->setNum(0);}
    if(now==7){
        p7=0;
        ui->progressBar_7->setValue(p7);
        ui->l7->setNum(0);}




}
