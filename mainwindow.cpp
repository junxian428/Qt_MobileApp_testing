#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the clicked signal of the pushButton to a lambda function
    connect(ui->pushButton, &QPushButton::clicked, this, [=]() {
        QMessageBox::information(this, tr("Hello"), tr("Hello World!"));
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
