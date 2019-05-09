#include<QApplication>
#include<QDialog>
#include<QLabel>
int main(int argc,char*argv[])
{
    QApplication a(argc,argv);
    QDialog w;
    w.resize(1000,1000);
    QLabel label(&w);
    
    label.move(120,120);
    label.setText(QObject::tr("Hello World! Hello QT!"));
    w.show();
    return a.exec();
}
