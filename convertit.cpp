#include "convertit.h"

ConvertIt::ConvertIt(QWidget *parent):QWidget(parent)
{
    _pMainWidget=new QWidget;

    _pLeftConversionText=new QLineEdit;
    _pRightConversionText=new QLineEdit;
    _midChangeButton=new QPushButton("<=>");
    _pGridLayout= new QGridLayout(_pMainWidget);

    //_pLeftConversionText->resize(10,100);
    _pGridLayout->addWidget(_pLeftConversionText,2,1);
    _pLeftConversionText->setMaximumWidth(40);

    _pGridLayout->addWidget(_pRightConversionText,2,4);

    _pGridLayout->addWidget(_midChangeButton,2,3);
    _pGridLayout->addWidget(nullptr,2,2);

    this->resize(100,100);
    this->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    this->setMinimumSize(500,300);
    this->setMaximumSize(500,300);
    this->setLayout(_pGridLayout);
}
