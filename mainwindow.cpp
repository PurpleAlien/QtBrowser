#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
    ui->setupUi(this);
 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Go_clicked()
{
    ui->Web->setUrl(QUrl(ui->URL->text()));
}

