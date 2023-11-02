#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "modelform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QWidget *modelWidget;

    QWidget *pLabel;
    QWidget *pLabel1;

    QWidget *widget_BranchDevice;
    QWidget *widget_PowerDevice;
    QWidget *widget_MeasureUnit;
    QWidget *widget_TransformerDevice;
    QWidget *widget_Load;
    QWidget *widget_CleanPower;
    QWidget *widget_ConmuniceteUnit;
    QWidget *widget_ConnectUnit;
    QWidget *widget_LogicDevice;
    QWidget *widget_othersUnit;
    QWidget *widget_userDIY;
};

#endif // MAINWINDOW_H
