#include "PaterRec.h"

#include <qdebug.h>



PaterRec::PaterRec(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    wf = new PaterRec_Fun;
    //�����ļ�������ص�����
    connect(ui.openFilebtn, &QPushButton::clicked, this, &PaterRec::OpenFile);
    connect(this, &PaterRec::chooseImg, wf, &PaterRec_Fun::getFileImgName);
    connect(wf, &PaterRec_Fun::getImgUrl, this, &PaterRec::emitUrl);
    connect(this, &PaterRec::changeStrType, this, &PaterRec::QStr2Str);
    connect(wf, &PaterRec_Fun::changeImgType, this, &PaterRec::Mat2QImage);

    //��ѡ������������
    connect(ui.tribtn, &QCheckBox::stateChanged, this, &PaterRec::setTriChoosed);
    connect(ui.rectbtn, &QCheckBox::stateChanged, this, &PaterRec::setRectChoosed);
    connect(ui.cirbtn, &QCheckBox::stateChanged, this, &PaterRec::setCirChoosed);
    connect(ui.polybtn, &QCheckBox::stateChanged, this, &PaterRec::setPolyChoosed);


    //��ѡ��ť�������
    connect(ui.resetbtn, &QPushButton::clicked, this, &PaterRec::return_Null);
    connect(this, &PaterRec::getReset_Signal, this, &PaterRec::resetClicked); 

    //Ӧ�ð�ť�������
    connect(ui.appbtn, &QPushButton::clicked, this, &PaterRec::appClikced);
    connect(wf, &PaterRec_Fun::recStart, wf, &PaterRec_Fun::outPutRec);

    //��ʾ���ð�ť�������
    connect(ui.setImgNull, &QPushButton::clicked, this, &PaterRec::setImgNULL);
    
    

    

}





//PatRec���вۺ�����ʵ��

//ͼƬѡ��
void PaterRec::OpenFile() {
    QString arg("Images(*.png *.jpg)");//Ĭ�Ϲ�����
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open your image"),
        "C:",
        tr("Images(*.png);;Images(*.jpg);;Images(*.png *.jpg)"), &arg);
    if (fileName != NULL) {
        QFileImgName = fileName;
        emit chooseImg();
    }
}

void PaterRec::QStr2Str() {
    wf->fileImg = imread(wf->fileImgName.toStdString());
    wf->fileImgCopy = wf->fileImg.clone();
    emit wf->changeImgType(wf->fileImg);  
}

//ͼƬUrl���ݲۺ���
void PaterRec::emitUrl() {
    wf->fileImgName = QFileImgName;
    emit changeStrType();
}

//�����ζ�ѡ��״ֵ̬�������òۺ���
bool PaterRec::setTriChoosed() {
    
    trichoosed = !trichoosed;
    return trichoosed;
}

//���ζ�ѡ��״ֵ̬�������òۺ���
bool PaterRec::setRectChoosed() {

    rectchoosed = !rectchoosed;
    return rectchoosed;
}

//Բ�ζ�ѡ��״ֵ̬�������òۺ���
bool PaterRec::setCirChoosed() {

    circhoosed = !circhoosed;
    return circhoosed;
}

//����ζ�ѡ��״ֵ̬�������òۺ���
bool PaterRec::setPolyChoosed() {

    polychoosed = !polychoosed;
    return polychoosed;
}

//��ѡ��ť����ۺ���
void PaterRec::resetClicked() {

    trichoosed = false;
    rectchoosed = false;
    circhoosed = false;
    polychoosed = false;

    
}


//Ӧ�ð�ť����ۺ���
void PaterRec::appClikced() {

    if (QFileImgName == NULL)
    {
        QMessageBox::about(this, "Error", QStringLiteral("����δѡ��ͼ���ļ�"));
        return_Null();
    }
    else
    {
        bool isChecked[4];
        if (trichoosed) {
            ui.tribtn->setCheckState(Qt::Checked);
            isChecked[0] = true;
        }
        else {
            ui.tribtn->setCheckState(Qt::Unchecked);
            isChecked[0] = false;
        }
        if (circhoosed) {
            ui.cirbtn->setCheckState(Qt::Checked);
            isChecked[1] = true;
        }
        else {
            ui.cirbtn->setCheckState(Qt::Unchecked);
            isChecked[1] = false;
        }
        if (rectchoosed) {
            ui.rectbtn->setCheckState(Qt::Checked);
            isChecked[2] = true;
        }
        else {
            ui.rectbtn->setCheckState(Qt::Unchecked);
            isChecked[2] = false;
        }
        if (polychoosed) {
            ui.polybtn->setCheckState(Qt::Checked);
            isChecked[3] = true;
        }
        else {
            ui.polybtn->setCheckState(Qt::Unchecked);
            isChecked[3] = false;
        }

        emit wf->recStart(isChecked);
    }
    
}


//����CheckState�Ĳۺ���
void PaterRec::return_Null() {

    ui.tribtn->setCheckState(Qt::Unchecked);
    ui.cirbtn->setCheckState(Qt::Unchecked);
    ui.rectbtn->setCheckState(Qt::Unchecked);
    ui.polybtn->setCheckState(Qt::Unchecked);
    emit getReset_Signal();//���������ź�
}


//Matת����QImage
void PaterRec::Mat2QImage(Mat mImage) {
    Mat rgb;
    if (mImage.channels() == 3)
    {
        //cvt Mat BGR 2 QImage RGB
        cvtColor(mImage, rgb, CV_BGR2RGB);
        QFileImg = QImage((const unsigned char*)(rgb.data),
            rgb.cols, rgb.rows,
            rgb.cols * rgb.channels(),
            QImage::Format_RGB888);
    }
    else
    {
        QFileImg = QImage((const unsigned char*)(mImage.data),
            mImage.cols, mImage.rows,
            mImage.cols * mImage.channels(),
            QImage::Format_RGB888);
    }
    imgShow();
}


//ͼƬ��ʾ����
void PaterRec::imgShow() {
    QFileImg = QFileImg.scaled(ui.imgShowWindow->size(), Qt::KeepAspectRatio);//Ĭ�ϱ���ԭͼ�Ŀ�߱�  ��label��СΪ��С
    ui.imgShowWindow->setPixmap(QPixmap::fromImage(QFileImg));
}

//������ʾ������
void PaterRec::setImgNULL() {
    ui.imgShowWindow->clear();
    QFileImgName = "";
}



