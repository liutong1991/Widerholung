#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    bool ok=1;
    QString s = ui->Eingabe_Laenge->text();
    int l = s.toInt(&ok,10);
    Q.setLaenge(l);
    int flaeche = Q.getFlaeche();
    ui->Ausgabe_Flaeche->setText(QString::number(flaeche));
}
