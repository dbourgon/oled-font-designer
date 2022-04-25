#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void toggle_action(bool c, QPushButton * pixel);

    void update_hex( void );

    void on_pixel00_toggled(bool checked);

    void on_pixel01_toggled(bool checked);

    void on_pixel03_toggled(bool checked);

    void on_pixel02_toggled(bool checked);

    void on_pixel04_toggled(bool checked);

    void on_pixel05_toggled(bool checked);

    void on_pixel06_toggled(bool checked);

    void on_pixel07_toggled(bool checked);

    void on_pixel17_toggled(bool checked);

    void on_pixel16_toggled(bool checked);

    void on_pixel15_toggled(bool checked);

    void on_pixel14_toggled(bool checked);

    void on_pixel13_toggled(bool checked);

    void on_pixel12_toggled(bool checked);

    void on_pixel11_toggled(bool checked);

    void on_pixel10_toggled(bool checked);

    void on_pixel27_toggled(bool checked);

    void on_pixel26_toggled(bool checked);

    void on_pixel25_toggled(bool checked);

    void on_pixel24_toggled(bool checked);

    void on_pixel23_toggled(bool checked);

    void on_pixel22_toggled(bool checked);

    void on_pixel21_toggled(bool checked);

    void on_pixel20_toggled(bool checked);

    void on_pixel37_toggled(bool checked);

    void on_pixel36_toggled(bool checked);

    void on_pixel35_toggled(bool checked);

    void on_pixel34_toggled(bool checked);

    void on_pixel33_toggled(bool checked);

    void on_pixel32_toggled(bool checked);

    void on_pixel31_toggled(bool checked);

    void on_pixel30_toggled(bool checked);

    void on_pixel47_toggled(bool checked);

    void on_pixel46_toggled(bool checked);

    void on_pixel45_toggled(bool checked);

    void on_pixel44_toggled(bool checked);

    void on_pixel43_toggled(bool checked);

    void on_pixel42_toggled(bool checked);

    void on_pixel41_toggled(bool checked);

    void on_pixel40_toggled(bool checked);

    void on_pixel57_toggled(bool checked);

    void on_pixel56_toggled(bool checked);

    void on_pixel55_toggled(bool checked);

    void on_pixel54_toggled(bool checked);

    void on_pixel53_toggled(bool checked);

    void on_pixel52_toggled(bool checked);

    void on_pixel51_toggled(bool checked);

    void on_pixel50_toggled(bool checked);

    void on_pixel67_toggled(bool checked);

    void on_pixel66_toggled(bool checked);

    void on_pixel65_toggled(bool checked);

    void on_pixel64_toggled(bool checked);

    void on_pixel63_toggled(bool checked);

    void on_pixel62_toggled(bool checked);

    void on_pixel61_toggled(bool checked);

    void on_pixel60_toggled(bool checked);

    void on_pixel77_toggled(bool checked);

    void on_pixel76_toggled(bool checked);

    void on_pixel75_toggled(bool checked);

    void on_pixel74_toggled(bool checked);

    void on_pixel73_toggled(bool checked);

    void on_pixel72_toggled(bool checked);

    void on_pixel71_toggled(bool checked);

    void on_pixel70_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
