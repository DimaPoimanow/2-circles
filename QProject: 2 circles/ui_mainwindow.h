/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *widget;
    QPushButton *Draw_Circles;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QTextBrowser *textBrowser_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QPushButton *Compute_Square;
    QTextEdit *textEdit_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QCheckBox *checkBox;
    QPushButton *CLEAR;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSlider *horizontalSlider_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1953, 952);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(530, 10, 931, 931));
        Draw_Circles = new QPushButton(centralWidget);
        Draw_Circles->setObjectName(QString::fromUtf8("Draw_Circles"));
        Draw_Circles->setGeometry(QRect(40, 690, 461, 51));
        Draw_Circles->setStyleSheet(QString::fromUtf8("color: rgb(85, 87, 83);\n"
"font: 75 14pt \"Tlwg Typo\";\n"
"background-color: rgb(245, 121, 0);\n"
"gridline-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 40, 461, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(92, 53, 102);\n"
"font: 57 14pt \"Ubuntu\";\n"
"background-color: rgb(114, 159, 207);"));
        textBrowser_3 = new QTextBrowser(centralWidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(40, 550, 461, 51));
        textBrowser_3->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
        doubleSpinBox_3 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(430, 550, 69, 51));
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);"));
        doubleSpinBox_3->setMinimum(-100.000000000000000);
        doubleSpinBox_3->setMaximum(100.000000000000000);
        doubleSpinBox_4 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(320, 550, 69, 51));
        doubleSpinBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);"));
        doubleSpinBox_4->setMinimum(-100.000000000000000);
        doubleSpinBox_4->setMaximum(100.000000000000000);
        textBrowser_4 = new QTextBrowser(centralWidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(40, 620, 461, 51));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
        doubleSpinBox_5 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(320, 620, 69, 51));
        doubleSpinBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);"));
        doubleSpinBox_5->setMinimum(-100.000000000000000);
        doubleSpinBox_5->setMaximum(100.000000000000000);
        doubleSpinBox_6 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(430, 620, 69, 51));
        doubleSpinBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);"));
        doubleSpinBox_6->setMinimum(-100.000000000000000);
        doubleSpinBox_6->setMaximum(100.000000000000000);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(150, 130, 351, 16));
        horizontalSlider->setMinimum(-100);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(150, 190, 351, 16));
        horizontalSlider_2->setMinimum(-100);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 120, 41, 41));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(40, 180, 41, 41));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(90, 180, 48, 41));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);"));
        spinBox->setMinimum(-1000);
        spinBox->setMaximum(1000);
        spinBox->setValue(10);
        spinBox->setDisplayIntegerBase(10);
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(90, 120, 48, 41));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);"));
        spinBox_2->setMinimum(-1000);
        spinBox_2->setMaximum(1000);
        spinBox_2->setValue(-10);
        Compute_Square = new QPushButton(centralWidget);
        Compute_Square->setObjectName(QString::fromUtf8("Compute_Square"));
        Compute_Square->setGeometry(QRect(1480, 30, 391, 41));
        Compute_Square->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);\n"
"font: 75 14pt \"Tlwg Typewriter\";"));
        textEdit_5 = new QTextEdit(centralWidget);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(1480, 100, 151, 41));
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(1640, 100, 231, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);\n"
"font: 75 13pt \"Tlwg Typo\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1480, 190, 381, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 127, 168);\n"
"font: 75 14pt \"Tlwg Typist\";"));
        textEdit_4 = new QTextEdit(centralWidget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(40, 480, 361, 51));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(40, 410, 361, 51));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);\n"
"font: 75 15pt \"Ubuntu Condensed\";\n"
"font: 75 14pt \"Tlwg Typo\";"));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(430, 410, 69, 51));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(153, 243, 232);"));
        doubleSpinBox->setMinimum(0.000000000000000);
        doubleSpinBox->setMaximum(100.000000000000000);
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(430, 480, 71, 51));
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 243, 232);"));
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setMaximum(100.000000000000000);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 350, 311, 41));
        checkBox->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu\";"));
        CLEAR = new QPushButton(centralWidget);
        CLEAR->setObjectName(QString::fromUtf8("CLEAR"));
        CLEAR->setGeometry(QRect(1480, 600, 381, 51));
        CLEAR->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);\n"
"color: rgb(238, 238, 236);\n"
"font: 75 14pt \"Tlwg Typo\";"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(370, 340, 112, 23));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(370, 370, 112, 23));
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(40, 260, 461, 21));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1953, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);
        QObject::connect(Compute_Square, SIGNAL(clicked()), lineEdit, SLOT(clear()));
        QObject::connect(Draw_Circles, SIGNAL(clicked()), Compute_Square, SLOT(click()));
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(doubleSpinBox, SIGNAL(editingFinished()), Draw_Circles, SLOT(click()));
        QObject::connect(doubleSpinBox_2, SIGNAL(editingFinished()), Draw_Circles, SLOT(click()));
        QObject::connect(doubleSpinBox_3, SIGNAL(editingFinished()), Draw_Circles, SLOT(click()));
        QObject::connect(doubleSpinBox_4, SIGNAL(editingFinished()), Draw_Circles, SLOT(click()));
        QObject::connect(doubleSpinBox_5, SIGNAL(editingFinished()), Draw_Circles, SLOT(click()));
        QObject::connect(doubleSpinBox_6, SIGNAL(editingFinished()), Draw_Circles, SLOT(click()));
        QObject::connect(horizontalSlider_2, SIGNAL(sliderMoved(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), pushButton_3, SLOT(click()));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), pushButton_3, SLOT(click()));
        QObject::connect(doubleSpinBox, SIGNAL(editingFinished()), Draw_Circles, SLOT(animateClick()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Draw_Circles->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\276\321\201\320\270 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202", nullptr));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\321\202\321\213 \321\206\320\265\320\275\321\202\321\200\320\260  X  -                   Y - </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">        1-\320\276\320\271 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270</span></p></body></html>", nullptr));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\321\202\321\213 \321\206\320\265\320\275\321\202\321\200\320\260  X  -                   Y - </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">        1-\320\276\320\271 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270</span></p></body></html>", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\236\320\242</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\224\320\236</span></p></body></html>", nullptr));
        Compute_Square->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\320\273\320\276\321\211\320\260\320\264\321\214 \320\277\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#cc0000;\">\320\237\320\273\320\276\321\211\320\260\320\264\321\214:</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214 \320\275\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\265", nullptr));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\264\320\270\321\203\321\201 2-\320\276\320\271 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tlwg Typo'; font-size:14pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-weight:400;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\264\320\270\321\203\321\201 1-\320\276\320\271 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\320\270</span></p></body></html>", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201\320\276\321\200 \320\264\320\273\321\217 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \321\206\320\265\320\275\321\202\321\200\320\276\320\262", nullptr));
        CLEAR->setText(QApplication::translate("MainWindow", "\320\236\320\247\320\230\320\241\320\242\320\230\320\242\320\254", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\320\264\320\273\321\217 1-\320\276\320\271", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\264\320\273\321\217 2-\320\276\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
