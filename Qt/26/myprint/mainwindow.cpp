#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtPrintSupport/QPrintDialog>
#include<QtPrintSupport/QPrinter>
#include<QtPrintSupport/QPrintPreviewDialog>
#include<QFileDialog>
#include<QFileInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QAction*action_print=new QAction(tr("Print"),this);
    QAction*action_printPreview=new QAction(tr("PrintPreview"),this);
    QAction*action_pdf=new QAction(tr("GenPdf"),this);
    connect(action_print,SIGNAL(triggered(bool)),this,SLOT(doPrint()));
    connect(action_printPreview,SIGNAL(triggered(bool)),this,SLOT(doPrintPreview()));
    connect(action_pdf,SIGNAL(triggered(bool)),this,SLOT(createPdf()));
    ui->mainToolBar->addAction(action_print);
    ui->mainToolBar->addAction(action_printPreview);
    ui->mainToolBar->addAction(action_pdf);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doPrint()
{
    QPrinter printer;
    QPrintDialog dlg(&printer,this);
    if(ui->textEdit->textCursor().hasSelection())
        dlg.addEnabledOption(QAbstractPrintDialog::PrintSelection);
    if(dlg.exec()==QDialog::Accepted)
    {
        ui->textEdit->print(&printer);
    }
}

void MainWindow::doPrintPreview()
{
    QPrinter printer;
    QPrintPreviewDialog preview(&printer,this);
    connect(&preview,&QPrintPreviewDialog::paintRequested,this,&MainWindow::printPreivew);
    preview.exec();
}

void MainWindow::printPreivew(QPrinter *printer)
{
    ui->textEdit->print(printer);
}

void MainWindow::createPdf()
{
    QString fileName=QFileDialog::getSaveFileName(this,tr("ExportPdfFile"),QString(),"*.pdf");
    if(!fileName.isEmpty())
    {
        if(QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
        QPrinter printer;
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);
        ui->textEdit->print(&printer);
    }
}

