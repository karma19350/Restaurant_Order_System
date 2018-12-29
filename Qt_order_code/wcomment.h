#ifndef WCOMMENT_H
#define WCOMMENT_H

#include <QWidget>
#include"table.h"
namespace Ui {
class wcomment;
}

class wcomment : public QWidget
{
    Q_OBJECT

public:
    explicit wcomment(MainWindow*w1,Table*pTable);
    ~wcomment();

private:
    Ui::wcomment *ui;
    MainWindow*w1;
    Table*pTable;
private slots:void submit();
};

#endif // WCOMMENT_H
