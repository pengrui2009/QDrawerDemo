#include "modelform.h"
#include "ui_modelform.h"

ModelForm::ModelForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModelForm)
{
    ui->setupUi(this);
}

ModelForm::~ModelForm()
{
    delete ui;
}
