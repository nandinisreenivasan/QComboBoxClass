#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>

widget::widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::widget)
{
    ui->setupUi(this);
        QStringList list;
        list <<"Fruits"<<"Apple"<<"Orange"<<"papaya"<<"JackFruit";
        ui->comboBox->setStyleSheet("background-color: rgb(0, 0, 0) ; color: rgb(0, 255, 255);");
        ui->comboBox->setEditable(true);
        for(int i=0;i<list.size();i++)
        {
        ui->comboBox->addItem(QIcon("C:/Users/nandi/OneDrive/Desktop/fruits.jpg"),list.at(i));
        }
}

widget::~widget()
{
    delete ui;
}

void widget::on_GetValuespushButton_clicked()
{
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";
    for(int i=0;i<ui->comboBox->count();i++)
    {
     qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);
    }
}

void widget::on_CaptureValuespushButton_clicked()
{
    qDebug()<<"The currently chosen item is "<<ui->comboBox->currentText();
    qDebug()<<"\nThe index is "<<QString::number(ui->comboBox->currentIndex());

}

void widget::on_SetValuespushButton_clicked()
{
   ui->comboBox->setCurrentIndex(2);
}
