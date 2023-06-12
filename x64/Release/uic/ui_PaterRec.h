/********************************************************************************
** Form generated from reading UI file 'PaterRec.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATERREC_H
#define UI_PATERREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaterRecClass
{
public:
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QFrame *line_5;
    QCommandLinkButton *openFilebtn;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *tribtn;
    QCheckBox *rectbtn;
    QCheckBox *cirbtn;
    QCheckBox *polybtn;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *appbtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetbtn;
    QLabel *imgShowWindow;
    QFrame *line;
    QPushButton *setImgNull;
    QFrame *line_6;

    void setupUi(QWidget *PaterRecClass)
    {
        if (PaterRecClass->objectName().isEmpty())
            PaterRecClass->setObjectName(QString::fromUtf8("PaterRecClass"));
        PaterRecClass->resize(720, 615);
        PaterRecClass->setMinimumSize(QSize(720, 580));
        PaterRecClass->setMaximumSize(QSize(720, 615));
        gridLayoutWidget_3 = new QWidget(PaterRecClass);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 0, 717, 617));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(7);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 1);
        line_5 = new QFrame(gridLayoutWidget_3);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 1, 0, 1, 1);

        openFilebtn = new QCommandLinkButton(gridLayoutWidget_3);
        openFilebtn->setObjectName(QString::fromUtf8("openFilebtn"));

        gridLayout_2->addWidget(openFilebtn, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        line_2 = new QFrame(gridLayoutWidget_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 1, -1, -1);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 1, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, 2, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, -1, 1);
        tribtn = new QCheckBox(gridLayoutWidget_3);
        tribtn->setObjectName(QString::fromUtf8("tribtn"));

        verticalLayout_6->addWidget(tribtn);

        rectbtn = new QCheckBox(gridLayoutWidget_3);
        rectbtn->setObjectName(QString::fromUtf8("rectbtn"));

        verticalLayout_6->addWidget(rectbtn);

        cirbtn = new QCheckBox(gridLayoutWidget_3);
        cirbtn->setObjectName(QString::fromUtf8("cirbtn"));

        verticalLayout_6->addWidget(cirbtn);

        polybtn = new QCheckBox(gridLayoutWidget_3);
        polybtn->setObjectName(QString::fromUtf8("polybtn"));

        verticalLayout_6->addWidget(polybtn);

        line_3 = new QFrame(gridLayoutWidget_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        line_4 = new QFrame(gridLayoutWidget_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 1, -1, -1);
        appbtn = new QPushButton(gridLayoutWidget_3);
        appbtn->setObjectName(QString::fromUtf8("appbtn"));

        horizontalLayout_4->addWidget(appbtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        resetbtn = new QPushButton(gridLayoutWidget_3);
        resetbtn->setObjectName(QString::fromUtf8("resetbtn"));

        horizontalLayout_4->addWidget(resetbtn);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        imgShowWindow = new QLabel(gridLayoutWidget_3);
        imgShowWindow->setObjectName(QString::fromUtf8("imgShowWindow"));
        imgShowWindow->setMinimumSize(QSize(480, 480));
        imgShowWindow->setMaximumSize(QSize(960, 960));
        imgShowWindow->setSizeIncrement(QSize(480, 480));
        imgShowWindow->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(imgShowWindow, 1, 4, 1, 1);

        line = new QFrame(gridLayoutWidget_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);

        setImgNull = new QPushButton(gridLayoutWidget_3);
        setImgNull->setObjectName(QString::fromUtf8("setImgNull"));

        gridLayout->addWidget(setImgNull, 0, 4, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addLayout(horizontalLayout_3);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        line_6 = new QFrame(gridLayoutWidget_3);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 1, 0, 1, 1);


        retranslateUi(PaterRecClass);

        QMetaObject::connectSlotsByName(PaterRecClass);
    } // setupUi

    void retranslateUi(QWidget *PaterRecClass)
    {
        PaterRecClass->setWindowTitle(QCoreApplication::translate("PaterRecClass", "PaterRec", nullptr));
        openFilebtn->setText(QCoreApplication::translate("PaterRecClass", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
        tribtn->setText(QCoreApplication::translate("PaterRecClass", "\344\270\211\350\247\222\345\275\242[\350\223\235]", nullptr));
        rectbtn->setText(QCoreApplication::translate("PaterRecClass", "\345\233\233\350\276\271\345\275\242[\347\272\242]", nullptr));
        cirbtn->setText(QCoreApplication::translate("PaterRecClass", "\345\234\206\345\275\242[\347\264\253]", nullptr));
        polybtn->setText(QCoreApplication::translate("PaterRecClass", "\345\244\232\350\276\271\350\241\214[\347\273\277]", nullptr));
        appbtn->setText(QCoreApplication::translate("PaterRecClass", "\345\272\224\347\224\250", nullptr));
        resetbtn->setText(QCoreApplication::translate("PaterRecClass", "\351\207\215\351\200\211", nullptr));
        imgShowWindow->setText(QString());
        setImgNull->setText(QCoreApplication::translate("PaterRecClass", "\346\230\276\347\244\272\345\214\272\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaterRecClass: public Ui_PaterRecClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATERREC_H
