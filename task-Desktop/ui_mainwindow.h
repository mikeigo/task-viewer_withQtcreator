/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate;
    QAction *actionView;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpinBox *spinBox_choose;
    QLabel *label_6;
    QSpinBox *spinBox_page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QLabel *l3;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_5;
    QLabel *label_9;
    QProgressBar *progressBar_1;
    QFrame *line;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_24;
    QSpinBox *spinBox_1;
    QLabel *label_27;
    QSpinBox *spinBox_6;
    QFrame *line_3;
    QFrame *line_2;
    QLabel *label_23;
    QLabel *label_5;
    QFrame *line_4;
    QLabel *l5;
    QProgressBar *progressBar_4;
    QProgressBar *progressBar_5;
    QProgressBar *progressBar_6;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_7;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QLabel *label_10;
    QLabel *label_4;
    QSpinBox *spinBox_7;
    QProgressBar *progressBar_2;
    QLabel *l4;
    QLabel *l6;
    QLabel *l1;
    QLabel *l7;
    QLabel *l2;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_19;
    QLabel *label_26;
    QMenuBar *menuBar;
    QMenu *menuMenue;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(535, 399);
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName(QStringLiteral("actionCreate"));
        actionView = new QAction(MainWindow);
        actionView->setObjectName(QStringLiteral("actionView"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_choose = new QSpinBox(centralWidget);
        spinBox_choose->setObjectName(QStringLiteral("spinBox_choose"));
        spinBox_choose->setMaximum(7);
        spinBox_choose->setValue(1);

        horizontalLayout->addWidget(spinBox_choose);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        spinBox_page = new QSpinBox(centralWidget);
        spinBox_page->setObjectName(QStringLiteral("spinBox_page"));
        spinBox_page->setValue(1);

        horizontalLayout->addWidget(spinBox_page);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        l3 = new QLabel(centralWidget);
        l3->setObjectName(QStringLiteral("l3"));

        gridLayout->addWidget(l3, 7, 4, 1, 1);

        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(999);
        spinBox_2->setValue(1);

        gridLayout->addWidget(spinBox_2, 5, 6, 1, 1);

        spinBox_5 = new QSpinBox(centralWidget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(999);
        spinBox_5->setValue(1);

        gridLayout->addWidget(spinBox_5, 10, 6, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 10, 2, 1, 1);

        progressBar_1 = new QProgressBar(centralWidget);
        progressBar_1->setObjectName(QStringLiteral("progressBar_1"));
        progressBar_1->setValue(0);

        gridLayout->addWidget(progressBar_1, 3, 3, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 1, 1, 2);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 9, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 2, 1, 1);

        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout->addWidget(label_24, 1, 3, 1, 1);

        spinBox_1 = new QSpinBox(centralWidget);
        spinBox_1->setObjectName(QStringLiteral("spinBox_1"));
        spinBox_1->setMaximum(999);
        spinBox_1->setValue(1);

        gridLayout->addWidget(spinBox_1, 3, 6, 1, 1);

        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout->addWidget(label_27, 12, 2, 1, 1);

        spinBox_6 = new QSpinBox(centralWidget);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMaximum(999);
        spinBox_6->setValue(1);

        gridLayout->addWidget(spinBox_6, 11, 6, 1, 1);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 3, 1, 2);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 1);

        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout->addWidget(label_23, 1, 2, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 2, 1, 1);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 2, 6, 1, 1);

        l5 = new QLabel(centralWidget);
        l5->setObjectName(QStringLiteral("l5"));

        gridLayout->addWidget(l5, 10, 4, 1, 1);

        progressBar_4 = new QProgressBar(centralWidget);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setValue(0);

        gridLayout->addWidget(progressBar_4, 9, 3, 1, 1);

        progressBar_5 = new QProgressBar(centralWidget);
        progressBar_5->setObjectName(QStringLiteral("progressBar_5"));
        progressBar_5->setValue(0);

        gridLayout->addWidget(progressBar_5, 10, 3, 1, 1);

        progressBar_6 = new QProgressBar(centralWidget);
        progressBar_6->setObjectName(QStringLiteral("progressBar_6"));
        progressBar_6->setValue(0);

        gridLayout->addWidget(progressBar_6, 11, 3, 1, 1);

        progressBar_3 = new QProgressBar(centralWidget);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setValue(0);

        gridLayout->addWidget(progressBar_3, 7, 3, 1, 1);

        progressBar_7 = new QProgressBar(centralWidget);
        progressBar_7->setObjectName(QStringLiteral("progressBar_7"));
        progressBar_7->setValue(0);

        gridLayout->addWidget(progressBar_7, 12, 3, 1, 1);

        spinBox_3 = new QSpinBox(centralWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(999);
        spinBox_3->setValue(1);

        gridLayout->addWidget(spinBox_3, 7, 6, 1, 1);

        spinBox_4 = new QSpinBox(centralWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMaximum(999);
        spinBox_4->setValue(1);

        gridLayout->addWidget(spinBox_4, 9, 6, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 11, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 6, 1, 1);

        spinBox_7 = new QSpinBox(centralWidget);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setMaximum(999);
        spinBox_7->setValue(1);

        gridLayout->addWidget(spinBox_7, 12, 6, 1, 1);

        progressBar_2 = new QProgressBar(centralWidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setValue(0);

        gridLayout->addWidget(progressBar_2, 5, 3, 1, 1);

        l4 = new QLabel(centralWidget);
        l4->setObjectName(QStringLiteral("l4"));

        gridLayout->addWidget(l4, 9, 4, 1, 1);

        l6 = new QLabel(centralWidget);
        l6->setObjectName(QStringLiteral("l6"));

        gridLayout->addWidget(l6, 11, 4, 1, 1);

        l1 = new QLabel(centralWidget);
        l1->setObjectName(QStringLiteral("l1"));

        gridLayout->addWidget(l1, 3, 4, 1, 1);

        l7 = new QLabel(centralWidget);
        l7->setObjectName(QStringLiteral("l7"));

        gridLayout->addWidget(l7, 12, 4, 1, 1);

        l2 = new QLabel(centralWidget);
        l2->setObjectName(QStringLiteral("l2"));

        gridLayout->addWidget(l2, 5, 4, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 5, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 5, 5, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 7, 5, 1, 1);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 9, 5, 1, 1);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 10, 5, 1, 1);

        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout->addWidget(label_19, 11, 5, 1, 1);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout->addWidget(label_26, 12, 5, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 535, 22));
        menuMenue = new QMenu(menuBar);
        menuMenue->setObjectName(QStringLiteral("menuMenue"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenue->menuAction());
        menuMenue->addAction(actionCreate);
        menuMenue->addAction(actionView);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionCreate->setText(QApplication::translate("MainWindow", "Create", Q_NULLPTR));
        actionView->setText(QApplication::translate("MainWindow", "View", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\252\262\351\241\214\347\225\252\345\217\267", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\351\200\262\343\202\201\343\201\237\351\207\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        l3->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "\343\203\236\343\203\253\343\202\257\343\202\271\347\265\214\346\270\210\345\255\246", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\347\265\214\346\270\210\345\217\262", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\265\214\346\270\210\346\225\260\345\255\246", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\343\203\237\343\202\257\343\203\255\347\265\214\346\270\210\345\255\246", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "\351\200\262\346\215\227", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "SPI", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "\350\252\262\351\241\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\350\250\210\351\207\217\347\265\214\346\270\210\345\255\246", Q_NULLPTR));
        l5->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "TOEFL", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\351\240\205\347\233\256\346\225\260", Q_NULLPTR));
        l4->setText(QString());
        l6->setText(QString());
        l1->setText(QString());
        l7->setText(QString());
        l2->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        menuMenue->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
