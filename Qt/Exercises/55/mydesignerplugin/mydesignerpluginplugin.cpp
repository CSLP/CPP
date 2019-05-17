#include "mydesignerplugin.h"
#include "mydesignerpluginplugin.h"
#include<QPushButton>
#include<QHBoxLayout>
#include <QtPlugin>

MyDesignerPluginPlugin::MyDesignerPluginPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
    QPushButton*button1=new QPushButton(this);
    QPushButton*button2=new QPushButton(this);
    button1->setText("hello");
    button2->setText("Qt!");
    QHBoxLayout *layout=new QHBoxLayout;
    layout->addWidget(button1);
    layout->addWidget(button2);
    setLayout(layout);
}

void MyDesignerPluginPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool MyDesignerPluginPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyDesignerPluginPlugin::createWidget(QWidget *parent)
{
    return new MyDesignerPlugin(parent);
}

QString MyDesignerPluginPlugin::name() const
{
    return QLatin1String("MyDesignerPlugin");
}

QString MyDesignerPluginPlugin::group() const
{
    return QLatin1String("");
}

QIcon MyDesignerPluginPlugin::icon() const
{
    return QIcon();
}

QString MyDesignerPluginPlugin::toolTip() const
{
    return QLatin1String("");
}

QString MyDesignerPluginPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool MyDesignerPluginPlugin::isContainer() const
{
    return false;
}

QString MyDesignerPluginPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyDesignerPlugin\" name=\"myDesignerPlugin\">\n</widget>\n");
}

QString MyDesignerPluginPlugin::includeFile() const
{
    return QLatin1String("mydesignerplugin.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mydesignerpluginplugin, MyDesignerPluginPlugin)
#endif // QT_VERSION < 0x050000
