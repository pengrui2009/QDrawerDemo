#include "mainwindow.h"
#include "ui_mainwindow.h"]

#include <QGroupBox>

#include "lockerwidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QList<QWidget*> widgets;


    LockerWidget *pToolBox = new LockerWidget(this);
    pLabel = new QLabel("test");
    pLabel->setStyleSheet("background-color:rgb(255,255,255)");
    widgets << pLabel;
//    pToolBox->add_locker("test", pLabel);
    pLabel1 = new QLabel("test1");
    pLabel1->setStyleSheet("background-color:rgb(255,255,255)");
    widgets << pLabel1;
//    pToolBox->add_locker("test1", pLabel);

    QStringList names;
    names << "电源设备" << "test1";

    pToolBox->add_locker(names, widgets);

    ui->verticalLayout->addWidget(pToolBox);
#if 0
    //创建抽屉盒子对象
//    LockerWidget* lockerWidget = new LockerWidget;

//    modelWidget = new ModelForm(this);
    modelWidget = new QGroupBox();
    //准备好抽屉widget（内部放啥自己布局决定）
    widget_BranchDevice = new QWidget(modelWidget); //支路设备
//    widget_PowerDevice = new QWidget(modelWidget); //电源设备
//    widget_MeasureUnit = new QWidget(/*modelWidget*/); //测量设备
//    widget_TransformerDevice = new QWidget(/*modelWidget*/); //变压器设备
//    widget_Load = new QWidget(/*modelWidget*/); //负荷元件
//    widget_CleanPower = new QWidget(/*modelWidget*/); //分布式电源
//    widget_ConmuniceteUnit = new QWidget(/*modelWidget*/); //通信元件
//    widget_ConnectUnit = new QWidget(/*modelWidget*/); //连接元件
//    widget_LogicDevice = new QWidget(/*modelWidget*/); //逻辑设备
//    widget_othersUnit = new QWidget(/*modelWidget*/); //其它元件
//    widget_userDIY = new QWidget(/*modelWidget*/); //用户自定义元件

    //准备好抽屉的名字集合、widget集合
    QStringList names;
    names << "电源设备";
//    names << "电源设备" << "支路设备" << "变压器设备" << "负荷元件" << "测量设备"
//          << "分布式电源" << "连接元件" << "通信元件" << "逻辑设备" << "其它元件"
//          << "自定义元件";

    QList<QWidget*> widgets;
    widgets << widget_PowerDevice;
//    widgets << widget_PowerDevice << widget_BranchDevice << widget_TransformerDevice
//            << widget_Load << widget_MeasureUnit << widget_CleanPower << widget_ConnectUnit
//            << widget_ConmuniceteUnit << widget_LogicDevice << widget_othersUnit << widget_userDIY;

    //向抽屉盒子中添加抽屉
//    lockerWidget->add_locker(names,widgets);
    ui->widget->add_locker(names, widgets);
#endif

}

MainWindow::~MainWindow()
{
    delete ui;
}
