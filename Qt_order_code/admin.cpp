#include "admin.h"
#include "qmessagebox.h"

Admin::Admin(QString newId, QString newPassword):
    AbstractUser(newId,newPassword),parent(parent)
{}
void Admin::setParent(adminwindow* parent){
    this->parent=parent;
}
