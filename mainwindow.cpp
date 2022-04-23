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
    delete ui;
}

void MainWindow::update_hex( void )
{
    int col0_data[8];
    int col1_data[8];
    int col2_data[8];
    int col3_data[8];
    int col4_data[8];
    int col5_data[8];
    int col6_data[8];
    int col7_data[8];

    int totals[8] = {0,0,0,0,0,0,0,0};
    int bnary[8] = {1,2,4,8,16,32,64,128};

    col0_data[0] = ui->pixel00->text().toInt();
    col0_data[1] = ui->pixel01->text().toInt();
    col0_data[2] = ui->pixel02->text().toInt();
    col0_data[3] = ui->pixel03->text().toInt();
    col0_data[4] = ui->pixel04->text().toInt();
    col0_data[5] = ui->pixel05->text().toInt();
    col0_data[6] = ui->pixel06->text().toInt();
    col0_data[7] = ui->pixel07->text().toInt();
    col1_data[0] = ui->pixel10->text().toInt();
    col1_data[1] = ui->pixel11->text().toInt();
    col1_data[2] = ui->pixel12->text().toInt();
    col1_data[3] = ui->pixel13->text().toInt();
    col1_data[4] = ui->pixel14->text().toInt();
    col1_data[5] = ui->pixel15->text().toInt();
    col1_data[6] = ui->pixel16->text().toInt();
    col1_data[7] = ui->pixel17->text().toInt();


    for( int i = 0; i < 8; i++){
        if( col0_data[i] == 1 ){
            totals[0] += bnary[i];
        }
        if( col1_data[i] == 1 ){
            totals[1] += bnary[i];
        }
    }

}

void MainWindow::toggle_action(bool c, QPushButton *pixel)
{
    if(c){
        pixel->setStyleSheet("background-color:black;color:white;");
        pixel->setText("1");
    } else {
        pixel->setStyleSheet("background-color:white;color:black;");
        pixel->setText("0");
    }

    update_hex();
}


void MainWindow::on_pixel00_toggled(bool checked)
{
    toggle_action(checked, ui->pixel00);
}


void MainWindow::on_pixel01_toggled(bool checked)
{
    toggle_action(checked, ui->pixel01);
}


void MainWindow::on_pixel02_toggled(bool checked)
{
    toggle_action(checked, ui->pixel02);
}


void MainWindow::on_pixel03_toggled(bool checked)
{
    toggle_action(checked, ui->pixel03);
}


void MainWindow::on_pixel04_toggled(bool checked)
{
    toggle_action(checked, ui->pixel04);
}


void MainWindow::on_pixel05_toggled(bool checked)
{
    toggle_action(checked, ui->pixel05);
}


void MainWindow::on_pixel06_toggled(bool checked)
{
    toggle_action(checked, ui->pixel06);
}


void MainWindow::on_pixel07_toggled(bool checked)
{
    toggle_action(checked, ui->pixel07);
}


void MainWindow::on_pixel17_toggled(bool checked)
{
    toggle_action(checked, ui->pixel17);
}


void MainWindow::on_pixel16_toggled(bool checked)
{
    toggle_action(checked, ui->pixel16);
}


void MainWindow::on_pixel15_toggled(bool checked)
{
    toggle_action(checked, ui->pixel15);
}


void MainWindow::on_pixel14_toggled(bool checked)
{
    toggle_action(checked, ui->pixel14);
}


void MainWindow::on_pixel13_toggled(bool checked)
{
    toggle_action(checked, ui->pixel13);
}


void MainWindow::on_pixel12_toggled(bool checked)
{
    toggle_action(checked, ui->pixel12);
}


void MainWindow::on_pixel11_toggled(bool checked)
{
    toggle_action(checked, ui->pixel11);
}


void MainWindow::on_pixel10_toggled(bool checked)
{
    toggle_action(checked, ui->pixel10);
}


void MainWindow::on_pixel27_toggled(bool checked)
{
    toggle_action(checked, ui->pixel27);
}


void MainWindow::on_pixel26_toggled(bool checked)
{
    toggle_action(checked, ui->pixel26);
}


void MainWindow::on_pixel25_toggled(bool checked)
{
    toggle_action(checked, ui->pixel25);
}


void MainWindow::on_pixel24_toggled(bool checked)
{
    toggle_action(checked, ui->pixel24);
}


void MainWindow::on_pixel23_toggled(bool checked)
{
    toggle_action(checked, ui->pixel23);
}


void MainWindow::on_pixel22_toggled(bool checked)
{
    toggle_action(checked, ui->pixel22);
}


void MainWindow::on_pixel21_toggled(bool checked)
{
    toggle_action(checked, ui->pixel21);
}


void MainWindow::on_pixel20_toggled(bool checked)
{
    toggle_action(checked, ui->pixel20);
}


void MainWindow::on_pixel37_toggled(bool checked)
{
    toggle_action(checked, ui->pixel37);
}


void MainWindow::on_pixel36_toggled(bool checked)
{
    toggle_action(checked, ui->pixel36);
}


void MainWindow::on_pixel35_toggled(bool checked)
{
    toggle_action(checked, ui->pixel35);
}


void MainWindow::on_pixel34_toggled(bool checked)
{
    toggle_action(checked, ui->pixel34);
}


void MainWindow::on_pixel33_toggled(bool checked)
{
    toggle_action(checked, ui->pixel33);
}


void MainWindow::on_pixel32_toggled(bool checked)
{
    toggle_action(checked, ui->pixel32);
}


void MainWindow::on_pixel31_toggled(bool checked)
{
    toggle_action(checked, ui->pixel31);
}


void MainWindow::on_pixel30_toggled(bool checked)
{
    toggle_action(checked, ui->pixel30);
}


void MainWindow::on_pixel47_toggled(bool checked)
{
    toggle_action(checked, ui->pixel47);
}


void MainWindow::on_pixel46_toggled(bool checked)
{
    toggle_action(checked, ui->pixel46);
}


void MainWindow::on_pixel45_toggled(bool checked)
{
    toggle_action(checked, ui->pixel45);
}


void MainWindow::on_pixel44_toggled(bool checked)
{
    toggle_action(checked, ui->pixel44);
}


void MainWindow::on_pixel43_toggled(bool checked)
{
    toggle_action(checked, ui->pixel43);
}


void MainWindow::on_pixel42_toggled(bool checked)
{
    toggle_action(checked, ui->pixel42);
}


void MainWindow::on_pixel41_toggled(bool checked)
{
    toggle_action(checked, ui->pixel41);
}


void MainWindow::on_pixel40_toggled(bool checked)
{
    toggle_action(checked, ui->pixel40);
}


void MainWindow::on_pixel57_toggled(bool checked)
{
    toggle_action(checked, ui->pixel57);
}


void MainWindow::on_pixel56_toggled(bool checked)
{
    toggle_action(checked, ui->pixel56);
}


void MainWindow::on_pixel55_toggled(bool checked)
{
    toggle_action(checked, ui->pixel55);
}


void MainWindow::on_pixel54_toggled(bool checked)
{
    toggle_action(checked, ui->pixel54);
}


void MainWindow::on_pixel53_toggled(bool checked)
{
    toggle_action(checked, ui->pixel53);
}


void MainWindow::on_pixel52_toggled(bool checked)
{
    toggle_action(checked, ui->pixel52);
}


void MainWindow::on_pixel51_toggled(bool checked)
{
    toggle_action(checked, ui->pixel51);
}


void MainWindow::on_pixel50_toggled(bool checked)
{
    toggle_action(checked, ui->pixel50);
}


void MainWindow::on_pixel67_toggled(bool checked)
{
    toggle_action(checked, ui->pixel67);
}


void MainWindow::on_pixel66_toggled(bool checked)
{
    toggle_action(checked, ui->pixel66);
}


void MainWindow::on_pixel65_toggled(bool checked)
{
    toggle_action(checked, ui->pixel65);
}


void MainWindow::on_pixel64_toggled(bool checked)
{
    toggle_action(checked, ui->pixel64);
}


void MainWindow::on_pixel63_toggled(bool checked)
{
    toggle_action(checked, ui->pixel63);
}


void MainWindow::on_pixel62_toggled(bool checked)
{
    toggle_action(checked, ui->pixel62);
}


void MainWindow::on_pixel61_toggled(bool checked)
{
    toggle_action(checked, ui->pixel61);
}


void MainWindow::on_pixel60_toggled(bool checked)
{
    toggle_action(checked, ui->pixel60);
}


void MainWindow::on_pixel77_toggled(bool checked)
{
    toggle_action(checked, ui->pixel77);
}


void MainWindow::on_pixel76_toggled(bool checked)
{
    toggle_action(checked, ui->pixel76);
}


void MainWindow::on_pixel75_toggled(bool checked)
{
    toggle_action(checked, ui->pixel75);
}


void MainWindow::on_pixel74_toggled(bool checked)
{
    toggle_action(checked, ui->pixel74);
}


void MainWindow::on_pixel73_toggled(bool checked)
{
    toggle_action(checked, ui->pixel73);
}


void MainWindow::on_pixel72_toggled(bool checked)
{
    toggle_action(checked, ui->pixel72);
}


void MainWindow::on_pixel71_toggled(bool checked)
{
    toggle_action(checked, ui->pixel71);
}


void MainWindow::on_pixel70_toggled(bool checked)
{
    toggle_action(checked, ui->pixel70);
}

