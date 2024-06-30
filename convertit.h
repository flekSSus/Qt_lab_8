#ifndef CONVERTIT_H
#define CONVERTIT_H
#include<QWidget>
#include<QLineEdit>
#include<QGridLayout>
#include<QPushButton>
#include<QComboBox>
#include<QLabel>
#include<QDebug>
#include<QMenuBar>
#include<QMenu>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>


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

    QMenuBar * _pMBar;
    QMenu *_pMenuFile;
    QMenu *_pMenuHelp;

public slots:
    void GiveResult();
    void ChangeRoles();

    void SaveResult();
private:
    int _variant{1};
    void CreateWindow();
    void CreateMenu();

};

#endif // CONVERTIT_H
