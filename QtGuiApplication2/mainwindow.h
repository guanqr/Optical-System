#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
	static QString c;

private slots:
    void on_pushButton_clicked();

    void on_start_clicked();

    void on_pushButton_3_clicked();

	void on_result_clicked();

	void on_help_clicked();

	

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
