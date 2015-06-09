#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logger.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_pushButton_clicked()
{
	Logger l("main_logger");
	QString text = ui->textEdit->toPlainText();

	ui->textBrowser->append( QString::fromUtf8(l.log_info(text.toStdString()).c_str()) );

	Person p("Jan Kowalski", 77, 180);

	ui->textBrowser->append( QString::fromUtf8(l.log_person_info(p).c_str()) );
}
