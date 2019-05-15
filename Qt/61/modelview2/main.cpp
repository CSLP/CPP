#include<QApplication>
#include<QDebug>
#include<QListWidget>
#include<QTreeWidget>
#include<QTableWidget>
int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QListWidget listWidget;
    new QListWidgetItem("a",&listWidget);
    QListWidgetItem  * listWidgetItem=new QListWidgetItem;
    listWidgetItem->setText("b");
    listWidgetItem->setIcon(QIcon("../modelview2/yafeilinux.png"));
    listWidgetItem->setToolTip("this is b");
    listWidget.insertItem(1,listWidgetItem);
    listWidget.sortItems(Qt::DescendingOrder);
    listWidget.show();
    return app.exec();

}
