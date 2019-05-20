#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcustomplot.h>
#include <QDebug>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
        QCustomPlot *wGraphic;      // Объявляем объект QCustomPlot
        QCPCurve *verticalLine;     // Объявляем объект для вертикальной линии
        QCPItemTracer *tracer;
        QLineEdit* For_S_lineEdit; // Трасировщик по точкам графика

private slots:

    void on_CLEAR_clicked();

    void on_pushButton_3_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);



    void clickedGraph(QMouseEvent *event);

    void on_doubleSpinBox_2_valueChanged(double arg1);
    void on_doubleSpinBox_4_valueChanged(double arg1);
    void on_doubleSpinBox_3_valueChanged(double arg1);
    void on_doubleSpinBox_5_valueChanged(double arg1);
    void on_doubleSpinBox_6_valueChanged(double arg1);
    void on_spinBox_2_valueChanged(int arg1);
    void on_spinBox_valueChanged(int arg1);
    void on_Draw_Circles_clicked();
    void on_pushButton_clicked();
    void on_Compute_Square_clicked();

    void on_checkBox_stateChanged(int arg1);
    void on_radioButton_clicked(bool checked);
    void on_radioButton_2_clicked(bool checked);
    void on_horizontalSlider_3_sliderMoved(int position);
};


#endif // MAINWINDOW_H
