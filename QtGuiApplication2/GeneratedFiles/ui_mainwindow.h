/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGQR;
    QAction *actionLWZ;
    QAction *actionLMR;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextEdit *save1;
    QTextEdit *result_txt;
    QLineEdit *lineEdit_name;
    QLabel *label;
    QLineEdit *lineEdit_a;
    QLabel *label_2;
    QLineEdit *lineEdit_k;
    QLabel *label_3;
    QLineEdit *lineEdit_c;
    QLabel *label_4;
    QLineEdit *lineEdit_wg;
    QLabel *label_5;
    QPushButton *start;
    QPushButton *result;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QPushButton *help;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(861, 549);
        actionGQR = new QAction(MainWindow);
        actionGQR->setObjectName(QStringLiteral("actionGQR"));
        actionLWZ = new QAction(MainWindow);
        actionLWZ->setObjectName(QStringLiteral("actionLWZ"));
        actionLMR = new QAction(MainWindow);
        actionLMR->setObjectName(QStringLiteral("actionLMR"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 50, 75, 23));
        save1 = new QTextEdit(centralWidget);
        save1->setObjectName(QStringLiteral("save1"));
        save1->setGeometry(QRect(40, 340, 321, 121));
        result_txt = new QTextEdit(centralWidget);
        result_txt->setObjectName(QStringLiteral("result_txt"));
        result_txt->setGeometry(QRect(440, 60, 391, 401));
        lineEdit_name = new QLineEdit(centralWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(150, 50, 81, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 71, 21));
        lineEdit_a = new QLineEdit(centralWidget);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(150, 80, 81, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 80, 71, 21));
        lineEdit_k = new QLineEdit(centralWidget);
        lineEdit_k->setObjectName(QStringLiteral("lineEdit_k"));
        lineEdit_k->setGeometry(QRect(150, 110, 81, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 110, 61, 21));
        lineEdit_c = new QLineEdit(centralWidget);
        lineEdit_c->setObjectName(QStringLiteral("lineEdit_c"));
        lineEdit_c->setGeometry(QRect(150, 140, 81, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 140, 131, 21));
        lineEdit_wg = new QLineEdit(centralWidget);
        lineEdit_wg->setObjectName(QStringLiteral("lineEdit_wg"));
        lineEdit_wg->setGeometry(QRect(150, 170, 81, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 170, 51, 21));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(50, 230, 111, 23));
        result = new QPushButton(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(580, 30, 101, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 135, 181, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 160, 161, 41));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 300, 91, 16));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 230, 101, 23));
        help = new QPushButton(centralWidget);
        help->setObjectName(QStringLiteral("help"));
        help->setGeometry(QRect(0, 0, 141, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 861, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionGQR);
        menu->addAction(actionLWZ);
        menu->addAction(actionLMR);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGQR->setText(QApplication::translate("MainWindow", "GQR", nullptr));
        actionLWZ->setText(QApplication::translate("MainWindow", "LWZ", nullptr));
        actionLMR->setText(QApplication::translate("MainWindow", "LMR", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("MainWindow", " \346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\255\224\351\230\221\345\215\212\345\276\204\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\247\206\345\234\272\350\247\222\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\344\270\272\346\227\240\347\251\267\350\277\234\347\211\251\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow", " \347\211\251\351\253\230\357\274\232", nullptr));
        start->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\345\210\235\345\247\213\345\217\202\346\225\260", nullptr));
        result->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\241\2531\344\270\272\346\227\240\347\251\267\350\277\234\357\274\2142\344\270\272\346\234\211\351\231\220\350\277\234", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\246\202\347\211\251\346\227\240\347\251\267\350\277\234\345\210\231\345\241\2530", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\346\226\207\344\273\266\346\225\260\346\215\256", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\241\347\256\227", nullptr));
        help->setText(QApplication::translate("MainWindow", "\345\246\202\344\275\225\344\275\277\347\224\250\346\234\254\350\275\257\344\273\266\357\274\237", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\347\254\254\344\272\224\347\273\204\346\210\220\345\221\230\345\220\215\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
