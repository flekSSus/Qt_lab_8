#ifndef CONVERTIT_H
#define CONVERTIT_H
#include<QWidget>
#include<QLineEdit>
#include<QGridLayout>
#include<QPushButton>


class ConvertIt:public QWidget
{
public:
    ConvertIt(QWidget* parent=nullptr);
    QWidget *_pMainWidget;
    QLineEdit *_pLeftConversionText;
    QLineEdit *_pRightConversionText;
    QPushButton *_midChangeButton;
    QGridLayout *_pGridLayout;


};

#endif // CONVERTIT_H
