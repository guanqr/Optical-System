#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<qfiledialog.h>
#include<qfile.h>
#include<qdebug.h>
#include<QProcess>
#include<QMessageBox>
#include<qtextcodec.h>

QString MainWindow::c;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	this->setWindowTitle("Ark_Aberration_Calculate");
	this->setWindowIcon(QIcon("./Resources/logo.ico"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
	QString filename = QFileDialog::getOpenFileName(this, "Open File", "C:\\", "text file(*.txt)");
	ui->lineEdit_name->setText(filename);
	QFile file(filename);
	QFileInfo fi;
	if (file.open(QFile::ReadOnly | QFile::Text))
	{

		ui->save1->setText(file.readAll());


	}

	fi = QFileInfo(filename);
	c = fi.absolutePath();
}

void MainWindow::on_pushButton_3_clicked()
{

	QFileInfo file("D://temp.txt");
	if (file.exists() == false)
	{
		QMessageBox::information(this, "Information", "Please setting the Initialization!!!", QMessageBox::Ok, QMessageBox::Ok);
		return;
	}

	QProcess *myProcess = new QProcess();


	myProcess->start("./Resources/optsystem_part2.exe");

	QMessageBox::information(this, "Information", "Calculate done!!!", QMessageBox::Ok, QMessageBox::Ok);

	QFile f;
	f.remove("D://temp.txt");
}

void MainWindow::on_start_clicked()
{
	QString filename, a, k, c, wg, all;
	QFile f;
	f.remove("D://temp.txt");
    wg=ui->lineEdit_wg->text();
    filename=ui->lineEdit_name->text();
    a=ui->lineEdit_a->text();
    k=ui->lineEdit_k->text();
    c=ui->lineEdit_c->text();
    all=filename+"\n"+a+"\n"+k+"\n"+c+"\n"+wg;
	if (filename == NULL || a == NULL || c == NULL || wg == NULL || k == NULL) {

		QMessageBox::information(this, "Information", "Please fill in all the boxes above", QMessageBox::Ok, QMessageBox::Ok);
		return;
	}
	if (c!='1'&&c!='2') {

		QMessageBox::information(this, "Information", "Please fill in the correct parameter", QMessageBox::Ok, QMessageBox::Ok);
		return;
	}

    QFile file("d://temp.txt");
    if(file.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        QTextStream stream(&file);
        stream <<all<<endl;


    }
    file.close();

	QMessageBox::information(this, "Information", "Setting done!!!", QMessageBox::Ok, QMessageBox::Ok);


}

void MainWindow::on_result_clicked() {
	QString filename =c + "/result.txt";
	
	//ui->result_txt->setText(filename);

	QFile file(filename);
	   if (file.open(QFile::ReadOnly|QFile::Text))
	   {
		  
		   ui->result_txt->setText(file.readAll());

		 
	   }
}

void MainWindow::on_help_clicked() {

	QProcess* process = new QProcess();

	QString notepadPath = "notepad.exe ./Resources/help.txt";
	
	process->start(notepadPath);
}




