#ifndef CONVERTIT_H
#define CONVERTIT_H
#include<QWidget>
#include<QLineEdit>
#include<QGridLayout>
#include<QPushButton>
#include<QComboBox>
#include<QLabel>
#include<QDebug>


class ConvertIt:public QWidget
{
    Q_OBJECT
public:

    ConvertIt(QWidget* parent=nullptr);
    ~ConvertIt(){}
    QLineEdit *_pLeftConversionText;
    QLabel *_pResultLabel;
    QLabel *_pVarLabel1;
    QLabel *_pVarLabel2;
    QPushButton *_pConvertButton;
    QPushButton *_pChangeButton;
    QGridLayout *_pGridLayout;
    QComboBox * _pComboBox1;

public slots:
    void GiveResult();
    void ChangeRoles();

private:
    int _variant{1};

};

#endif // CONVERTIT_H
