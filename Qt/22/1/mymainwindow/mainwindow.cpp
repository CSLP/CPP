#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QToolButton>
#include<QSpinBox>
#include<QTextEdit>
#include<QMdiSubWindow>
#include<QLabel>
#include"myaction.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu*editMenu=ui->menuBar->addMenu(tr("Edit(&E)"));
    QAction *action_Open=editMenu->addAction(
                QIcon(":/images/images/2.png"),tr("OpenFile(&O)"));
    action_Open->setShortcut(QKeySequence("Ctrl+o"));
    QAction *action_O=new QAction(this);
    action_O->setText(tr("NIUBI"));
    ui->mainToolBar->addAction(action_O);
    QActionGroup*group=new QActionGroup(this);
    QAction*action_L=group->addAction(tr("AlignLeft(&L)"));
    action_L->setCheckable(true);
    QAction*action_R=group->addAction(tr("AlignRight(&R)"));
    action_R->setCheckable(true);
    QAction*action_C=group->addAction(tr("AlignCenter(&C)"));
    action_C->setCheckable(true);
    action_C->setChecked(true);
    editMenu->addSeparator();
    editMenu->addAction(action_L);
    editMenu->addAction(action_R);
    editMenu->addAction(action_C);
    QToolButton*toolBtn=new QToolButton(this);
    toolBtn->setText(tr("Color"));
    QMenu*colorMenu=new QMenu(this);
    colorMenu->addAction(tr("Red"));
    colorMenu->addAction(tr("Green"));
    toolBtn->setMenu(colorMenu);
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);
    ui->mainToolBar->addWidget(toolBtn);
    QSpinBox*spinBox=new QSpinBox(this);
    ui->mainToolBar->addWidget(spinBox);
    ui->statusBar->showMessage(tr("Welcome Use MdiEdit"),2000);
    QLabel*permanent=new QLabel(this);
    permanent->setFrameStyle(QFrame::Box|QFrame::Sunken);
    permanent->setText("www.qter.org");
    ui->statusBar->addPermanentWidget(permanent);
    MyAction*action=new MyAction;
    QMenu*editMe=ui->menuBar->addMenu(tr("Editt"));
    editMe->addAction(action);
    connect(action,SIGNAL(getText(QString)),this,SLOT(setText(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNewFile_N_2_triggered()
{

}

void MainWindow::on_action_New_triggered()
{
   QTextEdit*edit=new QTextEdit(this);
   QMdiSubWindow*child=ui->mdiArea->addSubWindow(edit);
   child->setWindowTitle(tr("Duo Wen Dang Edit Sub Window"));
   child->show();
}

void MainWindow::on_actionDisplay_triggered()
{
    ui->dockWidget->show();
}

void MainWindow::setText(const QString &string)
{
    ui->textEdit->setText(string);
}
