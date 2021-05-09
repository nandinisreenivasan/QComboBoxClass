#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class widget; }
QT_END_NAMESPACE

class widget : public QMainWindow
{
    Q_OBJECT

public:
    widget(QWidget *parent = nullptr);
    ~widget();

private slots:

    void on_CaptureValuespushButton_clicked();

    void on_SetValuespushButton_clicked();

    void on_GetValuespushButton_clicked();

private:
    Ui::widget *ui;
};
#endif // WIDGET_H
