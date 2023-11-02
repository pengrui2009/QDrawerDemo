#ifndef MODELFORM_H
#define MODELFORM_H

#include <QWidget>

namespace Ui {
class ModelForm;
}

class ModelForm : public QWidget
{
    Q_OBJECT

public:
    explicit ModelForm(QWidget *parent = nullptr);
    ~ModelForm();

private:
    Ui::ModelForm *ui;
};

#endif // MODELFORM_H
