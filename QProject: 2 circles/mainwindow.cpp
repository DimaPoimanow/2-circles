#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <QApplication>

struct Dot {
    double x;
    double y;
}Dot;

struct Vector {
    double x;
    double y;
}Vector;

struct Dot A = {0.0 , 0.0};
struct Dot B = {0.0, 0.0};

double Ra = 0.0;
double Rb = 0.0;
double interval_A = -10.0;
double interval_B = 10.0;
double S = 0.0;
double minx = 0.0;
double maxx = 0.0;
double miny = 0.0;
double maxy = 0.0;
int state = 0;
int state_to_click = 0;
int click_on_1_circle = 0;
int click_on_2_circle = 0;




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->widget, SIGNAL(mousePress(QMouseEvent *)), SLOT(clickedGraph(QMouseEvent*)));
    For_S_lineEdit = new QLineEdit;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Draw_Circles_clicked()
{
        double h = 0.01;                //Шаг, с которым будем пробегать по оси Ox
        unsigned long N=100000;         //Вычисляем количество точек, которые будем отрисовывать
        double x[N];
        double y[N];
        long i=0;
        double Y = Ra;
        double D = 3.0*h - 2*Y;
        double X = 0;
        while (X<=Y) {
            x[i] = X + A.x;
            y[i] = Y + A.y;
            i++;
            x[i] = X + A.x;
            y[i] = -Y + A.y;
            i++;
            x[i] = -X + A.x;
            y[i] = -Y + A.y;
            i++;
            x[i] = -X + A.x;
            y[i] = Y + A.y;
            i++;
            x[i] = Y + A.x;
            y[i] = X + A.y;
            i++;
            x[i] = -Y + A.x;
            y[i] = X + A.y;
            i++;
            x[i] = Y + A.x;
            y[i] = -X + A.y;
            i++;
            x[i] = -Y + A.x;
            y[i] = -X + A.y;
            i++;

            if (D < 0.0) {
                D = D +4.0*X + 6.0*h;
            } else {
                D = D + 4.0*(X-Y) + 10.0*h;
                Y = Y - h;;
            }
            X = X + h;
        }

        Y = Rb;
        D = 3.0*h - 2*Y;
        X = 0;
        while (X<=Y) {
            x[i] = X + B.x;
            y[i] = Y + B.y;
            i++;
            x[i] = X + B.x;
            y[i] = -Y + B.y;
            i++;
            x[i] = -X + B.x;
            y[i] = -Y + B.y;
            i++;
            x[i] = -X + B.x;
            y[i] = Y + B.y;
            i++;
            x[i] = Y + B.x;
            y[i] = X + B.y;
            i++;
            x[i] = -Y + B.x;
            y[i] = X + B.y;
            i++;
            x[i] = Y + B.x;
            y[i] = -X + B.y;
            i++;
            x[i] = -Y + B.x;
            y[i] = -X + B.y;
            i++;

            if (D < 0.0) {
                D = D +4.0*X + 6.0*h;
            } else {
                D = D + 4.0*(X-Y) + 10.0*h;
                Y = Y - h;;
            }
            X = X + h;
        }

        N = i;
        QVector<double> Ax(N+2),By(N+2);
        for (int i=0; i<N; i++){
            Ax[i] = x[i];
            By[i] = y[i];
        }
        ui->widget->clearGraphs();
        ui->widget->addGraph();
        QCPScatterStyle myScatter1;
        ui->widget->graph(0)->setData(Ax, By);                                                //Говорим, что отрисовать нужно график по нашим двум массивам x и y
        myScatter1.setSize(6);
        myScatter1.setPen(QPen(Qt::black));
        myScatter1.setShape(QCPScatterStyle::ssCrossCircle);
        myScatter1.setBrush(Qt::black);
        ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
        ui->widget->graph(0)->setScatterStyle(myScatter1);

        ui->widget->xAxis->setLabel("x");                       //Подписываем оси Ox и Oy
        ui->widget->yAxis->setLabel("y");

        ui->widget->replot();

        QVector<double> C(2), E(2);
        C[0] = A.x;
        E[0] = A.y;
        C[1] = B.x;
        E[1] = B.y;
        ui->widget->addGraph();
        ui->widget->graph(1)->setData(C, E);
        QCPScatterStyle myScatter;
        myScatter.setShape(QCPScatterStyle::ssCircle);
        myScatter.setPen(QPen(Qt::black));
        myScatter.setBrush(Qt::red);
        myScatter.setSize(5);
        ui->widget->graph(1)->setLineStyle(QCPGraph::lsNone);
        ui->widget->graph(1)->setScatterStyle(myScatter);
        ui->widget->replot();

}


void MainWindow::on_pushButton_3_clicked()
{
    ui->widget->xAxis->setRange(interval_A, interval_B);
    ui->widget->yAxis->setRange(interval_A, interval_B);
    ui->widget->replot();
}



void MainWindow::on_doubleSpinBox_4_valueChanged(double arg1)
{
    A.x = arg1;
}

void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{
    A.y = arg1;
}

void MainWindow::on_doubleSpinBox_5_valueChanged(double arg1)
{
    B.x = arg1;
}

void MainWindow::on_doubleSpinBox_6_valueChanged(double arg1)
{
    B.y = arg1;
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    interval_A = arg1;
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    interval_B = arg1;
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    Ra = arg1;
}

void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{
    Rb = arg1;
}


double
distance_between_2_dots(struct Dot A, struct Dot B) {
   return sqrt( pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int
find_intersection_points_on_line(struct Dot A, struct Dot B, double Ra, double Rb, struct Dot *C, struct Dot *D){
    int state = 0;
    if (fabs(A.x - B.x) < 0.000001) {
       double ch;
       ch = A.x;
       A.x = A.y;
       A.y = ch;
       ch = B.x;
       B.x = B.y;
       B.y = ch;
       state = 1;
    }
    double AB = distance_between_2_dots(A,B);
    double k = (B.y - A.y) / (B.x - A.x);
    double b = A.y - A.x * k;
    if (state == 0){
        C->x = (pow(AB,2) + 2*Ra*AB - (pow(B.y,2) - pow(A.y,2)) - (pow(B.x,2) - pow(A.x,2)) - 2*b*(A.y - B.y)) / (2*(A.x - B.x) + k*2*(A.y - B.y));
        C->y = k*(C->x) + b;
        D->x = (pow(AB,2) + 2*Rb*AB - (pow(A.y,2) - pow(B.y,2)) - (pow(A.x,2) - pow(B.x,2)) - 2*b*(B.y - A.y)) / (2*(B.x - A.x) + k*2*(B.y - A.y));
        D->y = k*(D->x) + b;
    } else {
        C->y = (pow(AB,2) + 2*Ra*AB - (pow(B.y,2) - pow(A.y,2)) - (pow(B.x,2) - pow(A.x,2)) - 2*b*(A.y - B.y)) / (2*(A.x - B.x) + k*2*(A.y - B.y));
        C->x = k*(C->y) + b;
        D->y = (pow(AB,2) + 2*Rb*AB - (pow(A.y,2) - pow(B.y,2)) - (pow(A.x,2) - pow(B.x,2)) - 2*b*(B.y - A.y)) / (2*(B.x - A.x) + k*2*(B.y - A.y));;
        D->x = k*(D->y) + b;
    }
    return 0;


}

int
find_intersection_points(struct Dot A, struct Dot B, double Ra, double Rb, struct Dot *C, struct Dot *D){
    int state = 0;
    if (fabs(A.x - B.x) < 0.000001) {
       double ch;
       ch = A.x;
       A.x = A.y;
       A.y = ch;
       ch = B.x;
       B.x = B.y;
       B.y = ch;
       state = 1;
    }
    double a = ((pow(Rb,2) - pow(Ra,2)) - (pow(B.y,2) - pow(A.y,2)) - (pow(B.x,2) - pow(A.x,2))) / (2 * (A.x - B.x));
    double b = (A.y - B.y) / (A.x - B.x);
    double Discriminant = pow(2*(a-A.x)*b + 2*A.y,2) - 4*(pow(b,2) + 1) * (pow(a-A.x,2) + pow(A.y,2) - pow(Ra,2));
    double y1 = ((2*(a-A.x)*b + 2*A.y) + sqrt(Discriminant)) / (2 * (pow(b,2) + 1));
    double y2 = ((2*(a-A.x)*b + 2*A.y) - sqrt(Discriminant)) / (2 * (pow(b,2) + 1));
    double x1 = a - b*y1;
    double x2 = a - b*y2;
    if (state == 0){
        C->x = x1;
        C->y = y1;
        D->x = x2;
        D->y = y2;
    } else {
        C->x = y1;
        C->y = x1;
        D->x = y2;
        D->y = x2;
    }
    return 0;
}

double
tangle_between_2_vectors(struct Vector v_AB, struct Vector v_CD){
    double scal = v_AB.x * v_CD.x + v_AB.y * v_CD.y;
    double mod_AB = sqrt( pow(v_AB.x,2) + pow(v_AB.y,2));
    double mod_CD = sqrt( pow(v_CD.x,2) + pow(v_CD.y,2));
    return acos((scal) / (mod_AB * mod_CD));
}

double
S_triangle(double a, double b, double c){
    double p = (a +  b + c)/2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double
S_sector(double R, double tangle){
    return ((pow(R,2) * tangle) / 2);
}

void
MainWindow::on_Compute_Square_clicked()
{
    int state_change = 0;
    double AB = distance_between_2_dots(A,B);
    double RA = Ra;
    double RB = Rb;
    if (RB > RA) {
        double c;
        c = RB;
        RB = RA;
        RA = c;
        state_change = 1;
    }

    if ( (RA + RB) <= AB ) {
        S = 0;
        minx = 0.0;
        maxx = 0.0;
        miny = 0.0;
        maxy = 0.0;
        state = 1;
    } else if ( RA >= (AB + RB)){
        S = M_PI * pow(RB, 2);
        if (state_change == 0){
            minx = B.x - Rb;
            maxx = B.x + Rb;
            miny = B.y - Rb;
            maxy = B.y + Rb;
        } else {
            minx = A.x - Ra;
            maxx = A.x + Ra;
            miny = A.y - Ra;
            maxy = A.y + Ra;
        }
        state = 2;
    } else if (AB < RA) {
        state = 3;
        struct Dot C;
        struct Dot D;
        find_intersection_points(A, B, RA, RB, &C, &D);
        struct Vector v_AC;
        v_AC.x = C.x - A.x;
        v_AC.y = C.y - A.y;
        struct Vector v_AD;
        v_AD.x = D.x - A.x;
        v_AD.y = D.y - A.y;
        struct Vector v_BC;
        v_BC.x = C.x - B.x;
        v_BC.y = C.y - B.y;
        struct Vector v_BD;
        v_BD.x = D.x - B.x;
        v_BD.y = D.y - B.y;
        struct Vector v_BA;
        v_BA.x = A.x - B.x;
        v_BA.y = A.y - B.y;

        double DAC = tangle_between_2_vectors(v_AC, v_AD);
        double ABC = tangle_between_2_vectors(v_BA, v_BC);
        double AC = distance_between_2_dots(A,C);
        double BC = distance_between_2_dots(B,C);
        double S1 = S_triangle(RA, RB, AB);
        double S_sector_B = S_sector(RB, 2*(M_PI - ABC) );
        double S_sector_A = S_sector(RA, DAC);
        S = M_PI * pow(RB,2) - S_sector_B + S_sector_A - (2 * S1);
    } else {
        state = 4;
        struct Dot C;
        struct Dot D;
        find_intersection_points_on_line(A,B,RA,RB,&C,&D);
        struct Dot E;
        struct Dot F;
        find_intersection_points(A,B,RA,RB,&E,&F);
        double EC = distance_between_2_dots(E,C);
        double S1 = S_triangle(EC,RA,RA);
        double ED = distance_between_2_dots(E,D);
        double S2 = S_triangle(ED,RB,RB);
        struct Vector v_AE;
        v_AE.x = E.x - A.x;
        v_AE.y = E.y - A.y;
        struct Vector v_AC;
        v_AC.x = C.x - A.x;
        v_AC.y = C.y - A.y;
        double alfa = tangle_between_2_vectors(v_AC,v_AE);
        struct Vector v_BE;
        v_BE.x = E.x - B.x;
        v_BE.y = E.y - B.y;
        struct Vector v_BD;
        v_BD.x = D.x - B.x;
        v_BD.y = D.y - B.y;
        double betta = tangle_between_2_vectors(v_BE, v_BD);
        double S_sector_A = S_sector(RA,2*(M_PI - alfa));
        double S_sector_B = S_sector(RB,2*(M_PI - betta));
        double EF = distance_between_2_dots(E,F);
        double S_tr_CEF = S_triangle(EC,EC,EF);
        double S_tr_EFD = S_triangle(ED,ED,EF);
        S = 2*S1 + 2*S2 + S_sector_A + S_sector_B - S_tr_CEF - S_tr_EFD;
    }
    ui->lineEdit->setText(QString::number(S));
}

void
MainWindow::on_pushButton_clicked()
{   //if (state > 2){
    if ((A.x - Ra) < (B.x - Rb)){
        minx = A.x - Ra;
    } else {
        minx = B.x - Rb;
    }
    if ((A.x + Ra) > (B.x + Rb)){
        maxx = A.x + Ra;
    } else {
        maxx = B.x + Rb;
    }
    if ((A.y - Ra) < (B.y - Rb)){
        miny = A.y - Ra;
    } else {
        miny = B.y - Rb;
    }
    if ((A.y + Ra) > (B.y + Rb)){
        maxy = A.y + Ra;
    } else {
        maxy = B.y + Rb;
    }

    double h = 0.08;
    long N = (long)(((maxx- minx)/h) * ((maxy - miny)/h)) +2;
    long i = 0;
    double Q[N];
    double W[N];
    for (double X = minx; X <= maxx; X=X+h) {
        for (double Y = miny; Y <= maxy; Y = Y+h) {
            double R_1 = pow(X-A.x,2) + pow(Y-A.y,2);
            double R_2 = pow(X-B.x,2) + pow(Y-B.y,2);
            if ((R_1 <= pow(Ra,2)) && (R_2 <= pow(Rb,2))) {
                if ((fabs(X) > 0.001) && (fabs(Y) > 0.001)){
                    Q[i] = X;
                    W[i] = Y;
                    i++;
                }
            }
        }
    }
    if (i > 0) {
    N = i;
    QVector<double> q(N),w(N);
    for (int i=0; i<N; i++){
        q[i] = Q[i];
        w[i] = W[i];
    }
    //ui->widget->removeGraph(1);
    ui->widget->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    ui->widget->graph(2)->setData(q, w,1);
//    QCPScatterStyle MyScatter2;
//    MyScatter2.setShape(QCPScatterStyle::ssCrossCircle);
//    MyScatter2.setBrush(Qt::red);
//    MyScatter2.setSize(3);
//    MyScatter2.setPen(QPen(Qt::red));
//    //ui->widget->graph(1)->setPen(QColor(0, 40, 40, 120));//задаем цвет точки
//    //ui->widget->graph(2)->setLineStyle(QCPGraph::lsNone);//убираем линии
//    ui->widget->graph(2)->setScatterStyle(MyScatter2);
    ui->widget->replot();

    } else {
        N = 1;
        QVector<double> q(N),w(N);
        q[0] = 0.0;
        w[0] = 0.0;

        //ui->widget->removeGraph(1);
        ui->widget->addGraph();
        //Говорим, что отрисовать нужно график по нашим двум массивам x и y
        ui->widget->graph(2)->setData(q, w);
//        QCPScatterStyle MyScatter2;
//        MyScatter2.setShapex(QCPScatterStyle::ssCrossCircle);
//        MyScatter2.setBrush(Qt::red);
//        MyScatter2.setSize(3);
//        MyScatter2.setPen(QPen(Qt::red));
//        //ui->widget->graph(1)->setPen(QColor(0, 40, 40, 120));//задаем цвет точки
//        //ui->widget->graph(2)->setLineStyle(QCPGraph::lsNone);//убираем линии
//        //ui->widget->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCrossSquare,3));
//        ui->widget->graph(2)->setScatterStyle(MyScatter2);
        ui->widget->replot();
    }
}

void
MainWindow::clickedGraph(QMouseEvent *event)
{
    if (state_to_click > 0){
        QPoint point = event->pos();
        double X = ui->widget->xAxis->pixelToCoord(point.x());
        double Y = ui->widget->yAxis->pixelToCoord(point.y());
        if (click_on_1_circle > 0) {
            A.x = X;
            A.y = Y;
            on_Draw_Circles_clicked();
            on_pushButton_clicked();
            on_Compute_Square_clicked();
        } else {
            B.x = X;
            B.y = Y;
            on_Draw_Circles_clicked();
            on_pushButton_clicked();
            on_Compute_Square_clicked();
        }
    }
}



void MainWindow::on_checkBox_stateChanged(int arg1)
{
    state_to_click = arg1;
}

void MainWindow::on_CLEAR_clicked()
{
    ui->widget->clearGraphs();
    state = 0;
    QVector<double> a(1),b(1);
    a[0] = 0.0;
    b[0] = 0.0;
    A.x = 0.0;
    A.y = 0.0;
    B.x = 0.0;
    B.y = 0.0;
    Ra = 0.0;
    Rb = 0.0;
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(a,b);
    ui->widget->replot();
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    click_on_1_circle = checked;
}

void MainWindow::on_radioButton_2_clicked(bool checked)
{
    click_on_1_circle = 0;
    click_on_2_circle = checked;

}

void MainWindow::on_horizontalSlider_3_sliderMoved(int position)
{
    interval_A = (-1)*position;
    interval_B = position;
    ui->widget->xAxis->setRange(interval_A, interval_B);
    ui->widget->yAxis->setRange(interval_A, interval_B);
    ui->widget->replot();
}
