#pragma once
#include <QtWidgets/QMainWindow>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include <opencv2\imgproc\types_c.h>

using namespace cv;
using namespace std;

class PaterRec_Fun : public QMainWindow
{
    Q_OBJECT

public:
    PaterRec_Fun(QWidget* parent = Q_NULLPTR);

    QString fileImgName;

    Mat fileImg;
    Mat fileImgCopy;

    

    

public slots:
    void getFileImgName();

    void outPutRec(bool isChecked[]);
    
signals:
    void getImgUrl();

    void recStart(bool isChecked[]);

    void changeImgType(Mat);
private:
    
        

};

