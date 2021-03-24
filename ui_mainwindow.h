/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QGroupBox *groupBox_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *ajouter_commande;
    QPushButton *statistique_commande;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *page_5;
    QGroupBox *groupBox_9;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *modifier_commande;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_11;
    QLineEdit *lineEdit_4;
    QWidget *page_6;
    QTableView *tableView_Commandes;
    QWidget *page_7;
    QGroupBox *groupBox_10;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QPushButton *supprimer_commande;
    QPushButton *pushButton_14;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *bar_ajoutC;
    QPushButton *bar_modifC;
    QPushButton *bar_afficheC;
    QPushButton *bar_suppC;
    QPushButton *deconnexion1;
    QPushButton *home1;
    QWidget *page_3;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QStackedWidget *stackedWidget_3;
    QWidget *page_8;
    QGroupBox *groupBox_11;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QSpinBox *spinBox;
    QPushButton *ajouter_boutique;
    QPushButton *pushButton_16;
    QLabel *label_19;
    QLineEdit *lineEdit_16;
    QSpinBox *spinBox_3;
    QWidget *page_9;
    QGroupBox *groupBox_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QSpinBox *spinBox_2;
    QTimeEdit *timeEdit_2;
    QPushButton *modifier_boutique;
    QPushButton *pushButton_19;
    QPushButton *pushButton_17;
    QLineEdit *lineEdit_11;
    QLabel *label_12;
    QWidget *page_10;
    QGroupBox *groupBox_13;
    QLabel *label_17;
    QLineEdit *lineEdit_14;
    QPushButton *supprimer_boutique;
    QPushButton *pushButton_21;
    QWidget *page_11;
    QGroupBox *groupBox_14;
    QPushButton *pushButton_22;
    QLabel *label_18;
    QComboBox *comboBox;
    QTableView *tableView_boutique;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bar_ajoutB;
    QPushButton *bar_modifB;
    QPushButton *bar_affichB;
    QPushButton *bar_suppB;
    QPushButton *deconnexion2;
    QPushButton *home2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 30, 761, 341));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(49, 19, 691, 271));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 10, 75, 23));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 30, 641, 191));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 130, 211, 23));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 130, 181, 23));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(590, 240, 75, 23));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 751, 321));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 40, 701, 261));
        stackedWidget_2 = new QStackedWidget(groupBox_4);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 70, 661, 171));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_7 = new QGroupBox(page_4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(40, 10, 581, 151));
        lineEdit = new QLineEdit(groupBox_7);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 50, 161, 20));
        lineEdit_2 = new QLineEdit(groupBox_7);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 80, 141, 20));
        lineEdit_3 = new QLineEdit(groupBox_7);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 120, 141, 20));
        ajouter_commande = new QPushButton(groupBox_7);
        ajouter_commande->setObjectName(QStringLiteral("ajouter_commande"));
        ajouter_commande->setGeometry(QRect(490, 110, 75, 23));
        statistique_commande = new QPushButton(groupBox_7);
        statistique_commande->setObjectName(QStringLiteral("statistique_commande"));
        statistique_commande->setGeometry(QRect(470, 60, 101, 23));
        label_2 = new QLabel(groupBox_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(36, 49, 91, 21));
        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 80, 101, 16));
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 121, 20));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox_9 = new QGroupBox(page_5);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setEnabled(true);
        groupBox_9->setGeometry(QRect(0, 40, 641, 141));
        label = new QLabel(groupBox_9);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 101, 16));
        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 60, 111, 16));
        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 90, 121, 16));
        lineEdit_5 = new QLineEdit(groupBox_9);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 30, 141, 20));
        lineEdit_6 = new QLineEdit(groupBox_9);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 60, 131, 20));
        lineEdit_7 = new QLineEdit(groupBox_9);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(150, 90, 113, 20));
        modifier_commande = new QPushButton(groupBox_9);
        modifier_commande->setObjectName(QStringLiteral("modifier_commande"));
        modifier_commande->setGeometry(QRect(290, 110, 75, 23));
        groupBox_8 = new QGroupBox(page_5);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 10, 661, 211));
        pushButton_11 = new QPushButton(groupBox_8);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(370, 10, 91, 23));
        lineEdit_4 = new QLineEdit(groupBox_8);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(200, 10, 113, 20));
        stackedWidget_2->addWidget(page_5);
        groupBox_8->raise();
        groupBox_9->raise();
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        tableView_Commandes = new QTableView(page_6);
        tableView_Commandes->setObjectName(QStringLiteral("tableView_Commandes"));
        tableView_Commandes->setGeometry(QRect(30, 20, 591, 151));
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_10 = new QGroupBox(page_7);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(20, 20, 621, 161));
        label_7 = new QLabel(groupBox_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 30, 201, 16));
        lineEdit_8 = new QLineEdit(groupBox_10);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(40, 70, 211, 20));
        supprimer_commande = new QPushButton(groupBox_10);
        supprimer_commande->setObjectName(QStringLiteral("supprimer_commande"));
        supprimer_commande->setGeometry(QRect(200, 120, 161, 23));
        pushButton_14 = new QPushButton(groupBox_10);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(500, 130, 75, 23));
        stackedWidget_2->addWidget(page_7);
        horizontalLayoutWidget = new QWidget(groupBox_4);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 30, 511, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bar_ajoutC = new QPushButton(horizontalLayoutWidget);
        bar_ajoutC->setObjectName(QStringLiteral("bar_ajoutC"));

        horizontalLayout->addWidget(bar_ajoutC);

        bar_modifC = new QPushButton(horizontalLayoutWidget);
        bar_modifC->setObjectName(QStringLiteral("bar_modifC"));

        horizontalLayout->addWidget(bar_modifC);

        bar_afficheC = new QPushButton(horizontalLayoutWidget);
        bar_afficheC->setObjectName(QStringLiteral("bar_afficheC"));

        horizontalLayout->addWidget(bar_afficheC);

        bar_suppC = new QPushButton(horizontalLayoutWidget);
        bar_suppC->setObjectName(QStringLiteral("bar_suppC"));

        horizontalLayout->addWidget(bar_suppC);

        deconnexion1 = new QPushButton(groupBox_3);
        deconnexion1->setObjectName(QStringLiteral("deconnexion1"));
        deconnexion1->setGeometry(QRect(660, 10, 75, 23));
        home1 = new QPushButton(groupBox_3);
        home1->setObjectName(QStringLiteral("home1"));
        home1->setGeometry(QRect(580, 10, 75, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_5 = new QGroupBox(page_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(19, 9, 721, 331));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 30, 691, 281));
        stackedWidget_3 = new QStackedWidget(groupBox_6);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(20, 60, 651, 201));
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_11 = new QGroupBox(page_8);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(20, 20, 631, 171));
        label_8 = new QLabel(groupBox_11);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 50, 101, 16));
        label_9 = new QLabel(groupBox_11);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 80, 47, 14));
        label_10 = new QLabel(groupBox_11);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 110, 111, 16));
        label_11 = new QLabel(groupBox_11);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 140, 71, 16));
        lineEdit_9 = new QLineEdit(groupBox_11);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(130, 50, 141, 20));
        lineEdit_10 = new QLineEdit(groupBox_11);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(70, 80, 181, 20));
        spinBox = new QSpinBox(groupBox_11);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(140, 110, 71, 22));
        ajouter_boutique = new QPushButton(groupBox_11);
        ajouter_boutique->setObjectName(QStringLiteral("ajouter_boutique"));
        ajouter_boutique->setGeometry(QRect(400, 40, 75, 23));
        pushButton_16 = new QPushButton(groupBox_11);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(410, 110, 75, 23));
        label_19 = new QLabel(groupBox_11);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 20, 81, 16));
        lineEdit_16 = new QLineEdit(groupBox_11);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(110, 20, 121, 20));
        spinBox_3 = new QSpinBox(groupBox_11);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(140, 140, 61, 22));
        stackedWidget_3->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        groupBox_12 = new QGroupBox(page_9);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(20, 50, 621, 161));
        label_13 = new QLabel(groupBox_12);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 20, 91, 16));
        label_14 = new QLabel(groupBox_12);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 50, 47, 14));
        label_15 = new QLabel(groupBox_12);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 80, 111, 16));
        label_16 = new QLabel(groupBox_12);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 110, 47, 14));
        lineEdit_12 = new QLineEdit(groupBox_12);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(132, 20, 191, 20));
        lineEdit_13 = new QLineEdit(groupBox_12);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(110, 50, 113, 20));
        spinBox_2 = new QSpinBox(groupBox_12);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(140, 80, 42, 22));
        timeEdit_2 = new QTimeEdit(groupBox_12);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(110, 110, 118, 22));
        modifier_boutique = new QPushButton(groupBox_12);
        modifier_boutique->setObjectName(QStringLiteral("modifier_boutique"));
        modifier_boutique->setGeometry(QRect(400, 30, 75, 23));
        pushButton_19 = new QPushButton(groupBox_12);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(400, 90, 75, 23));
        pushButton_17 = new QPushButton(page_9);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(280, 10, 75, 23));
        lineEdit_11 = new QLineEdit(page_9);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(120, 10, 131, 20));
        label_12 = new QLabel(page_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 10, 91, 20));
        stackedWidget_3->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        groupBox_13 = new QGroupBox(page_10);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(30, 20, 601, 171));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 40, 201, 16));
        lineEdit_14 = new QLineEdit(groupBox_13);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(90, 70, 281, 20));
        supprimer_boutique = new QPushButton(groupBox_13);
        supprimer_boutique->setObjectName(QStringLiteral("supprimer_boutique"));
        supprimer_boutique->setGeometry(QRect(120, 120, 141, 23));
        pushButton_21 = new QPushButton(groupBox_13);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(300, 120, 131, 23));
        stackedWidget_3->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        groupBox_14 = new QGroupBox(page_11);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(20, 10, 621, 181));
        pushButton_22 = new QPushButton(groupBox_14);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(470, 150, 75, 23));
        label_18 = new QLabel(groupBox_14);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 110, 71, 16));
        comboBox = new QComboBox(groupBox_14);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 130, 81, 21));
        tableView_boutique = new QTableView(groupBox_14);
        tableView_boutique->setObjectName(QStringLiteral("tableView_boutique"));
        tableView_boutique->setGeometry(QRect(90, 20, 481, 131));
        stackedWidget_3->addWidget(page_11);
        horizontalLayoutWidget_2 = new QWidget(groupBox_6);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(60, 20, 501, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        bar_ajoutB = new QPushButton(horizontalLayoutWidget_2);
        bar_ajoutB->setObjectName(QStringLiteral("bar_ajoutB"));

        horizontalLayout_2->addWidget(bar_ajoutB);

        bar_modifB = new QPushButton(horizontalLayoutWidget_2);
        bar_modifB->setObjectName(QStringLiteral("bar_modifB"));

        horizontalLayout_2->addWidget(bar_modifB);

        bar_affichB = new QPushButton(horizontalLayoutWidget_2);
        bar_affichB->setObjectName(QStringLiteral("bar_affichB"));

        horizontalLayout_2->addWidget(bar_affichB);

        bar_suppB = new QPushButton(horizontalLayoutWidget_2);
        bar_suppB->setObjectName(QStringLiteral("bar_suppB"));

        horizontalLayout_2->addWidget(bar_suppB);

        deconnexion2 = new QPushButton(groupBox_5);
        deconnexion2->setObjectName(QStringLiteral("deconnexion2"));
        deconnexion2->setGeometry(QRect(620, 10, 75, 23));
        home2 = new QPushButton(groupBox_5);
        home2->setObjectName(QStringLiteral("home2"));
        home2->setGeometry(QRect(530, 10, 75, 23));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "                                                                                    Cookies", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "deconnexion", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "                                                                        gestion commande et boutique ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "gestion commande", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "gestion boutique ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "home", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "                                                                                       Gestion des Commandes ", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "   Commande", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "             PASSER VOTRE COMMANDE", Q_NULLPTR));
        ajouter_commande->setText(QApplication::translate("MainWindow", "ajouter ", Q_NULLPTR));
        statistique_commande->setText(QApplication::translate("MainWindow", "statistique ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "nom produit ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "nombre de produit", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "reference de commande", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Modifier ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom de produit", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Nombre de produit ", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "reference de commande", Q_NULLPTR));
        modifier_commande->setText(QApplication::translate("MainWindow", "Modifier ", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Tapper la reference de Commande ", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "chercher ", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Taper la Reference de commande ", Q_NULLPTR));
        supprimer_commande->setText(QApplication::translate("MainWindow", "confirmer la suppression", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "annuler ", Q_NULLPTR));
        bar_ajoutC->setText(QApplication::translate("MainWindow", "ajouter ", Q_NULLPTR));
        bar_modifC->setText(QApplication::translate("MainWindow", "modifier ", Q_NULLPTR));
        bar_afficheC->setText(QApplication::translate("MainWindow", "afficher ", Q_NULLPTR));
        bar_suppC->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        deconnexion1->setText(QApplication::translate("MainWindow", "deconnexion", Q_NULLPTR));
        home1->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "                                                              Gestion des Boutiques ", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Boutique", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Ajouter ", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Nom de boutique ", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Adresse ", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "nombre d'employees", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "nbr_d'heure ", Q_NULLPTR));
        ajouter_boutique->setText(QApplication::translate("MainWindow", "Ajouter ", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "annuler", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "ID_boutique", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Nom de boutique ", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Adresse ", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "nombre d'employees", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Horaire ", Q_NULLPTR));
        modifier_boutique->setText(QApplication::translate("MainWindow", "Confirmer ", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "Annuler ", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "chercher ", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "taper l'ID", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Supprimer ", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Taper l'identifiant du boutique ", Q_NULLPTR));
        supprimer_boutique->setText(QApplication::translate("MainWindow", "confirmer la suppression", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "Annuler ", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "Afficher ", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Trier selon ", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "nbr employees", Q_NULLPTR)
        );
        bar_ajoutB->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        bar_modifB->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        bar_affichB->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        bar_suppB->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        deconnexion2->setText(QApplication::translate("MainWindow", "deconnexion", Q_NULLPTR));
        home2->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
