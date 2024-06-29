#include "convertit.h"

ConvertIt::ConvertIt(QWidget *parent):QWidget(parent)
{

    _pLeftConversionText=new QLineEdit(this);
    _pResultLabel=new QLabel ("Result",this);
    _pVarLabel1=new QLabel ("m^3",this);
    _pVarLabel2=new QLabel ("kg",this);
    _pConvertButton=new QPushButton("Convert",this);
    _pChangeButton=new QPushButton("<=>",this);
    _pGridLayout= new QGridLayout(this);
    _pComboBox1=new QComboBox(this);

    _pLeftConversionText->resize(10,100);
    _pLeftConversionText->setMaximumWidth(80);
    _pGridLayout->addWidget(_pLeftConversionText,2,1);

    _pGridLayout->addWidget(_pVarLabel1,2,2,Qt::AlignLeft);

    _pComboBox1->setMaximumWidth(80);
    _pComboBox1->insertItem(0,"water");
    _pComboBox1->insertItem(1,"salt");
    _pComboBox1->insertItem(2,"oil");
    _pGridLayout->addWidget(_pComboBox1,2,3);

    _pChangeButton->setMaximumWidth(60);
    _pGridLayout->addWidget(_pChangeButton,2,4,Qt::AlignHCenter);

    _pResultLabel->setMaximumWidth(80);
    _pResultLabel->setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
    _pGridLayout->addWidget(_pResultLabel,2,5);

    _pGridLayout->addWidget(_pVarLabel2,2,6,Qt::AlignLeft);

    _pConvertButton->setMaximumWidth(60);
    _pGridLayout->addWidget(_pConvertButton,3,1);

    connect(_pConvertButton,SIGNAL(clicked()),this,SLOT(ChangeResult()));

    this->resize(100,100);
    this->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    this->setMinimumSize(500,300);
    this->setMaximumSize(500,300);
    this->setLayout(_pGridLayout);
}
void ConvertIt::ChangeResult()
{
    int result=0;
    delete _pResultLabel;

    switch (_pComboBox1->currentIndex())
    {
        case 0:
        result=_pLeftConversionText->text().toInt()*1;
        break;
        case 1:
        result=_pLeftConversionText->text().toInt()*1.15;
        break;
        case 2:
        result=_pLeftConversionText->text().toInt()*0.8;
        break;
        default:
        result=_pLeftConversionText->text().toInt()*0;
        break;
    }

    _pResultLabel=new QLabel(QString::number(result),this);
    _pGridLayout->addWidget(_pResultLabel,2,5);
    _pResultLabel->setMaximumWidth(80);
}
