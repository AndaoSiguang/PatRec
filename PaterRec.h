#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PaterRec.h"
#include <qfiledialog.h>
#include "PaterRec_Fun.h"
#include <qmessagebox.h>


class PaterRec : public QMainWindow
{
    Q_OBJECT


public:
    PaterRec(QWidget* parent = Q_NULLPTR);

    void imgShow();
    
    
    QImage QFileImg;
public slots:
    void OpenFile();



    bool setTriChoosed();
    bool setRectChoosed();
    bool setCirChoosed();
    bool setPolyChoosed();

    void resetClicked();
    void appClikced();

    void return_Null();
    void emitUrl();

    void QStr2Str();
    void Mat2QImage(Mat mImage);

    void setImgNULL();

signals:
    void getReset_Signal();

    void chooseImg();

    void changeStrType();
    
    

private:
    Ui::PaterRecClass ui;

    QString QFileImgName;


    bool trichoosed = false;
    bool rectchoosed = false;
    bool circhoosed = false;
    bool polychoosed = false;
    PaterRec_Fun *wf;
};



