#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"boutique.h"
#include<QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString nom_produit=ui->lineEdit_2->text();
    int nbr_produit=ui->lineEdit_2->text().toInt();
     QString ref_commande=ui->lineEdit_3->text();
     Boutique b (nom_produit,ref_commande,nbr_produit);
     bool test=b.ajouter();
     if(test)
         {
             QMessageBox::information(nullptr, QObject::tr("ok"),
                         QObject::tr("ajout effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
             ui->tableView->setModel(b.afficher());


     }
         else
             QMessageBox::critical(nullptr, QObject::tr("not ok"),
                         QObject::tr("ajout non effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

    }




void MainWindow::on_pushButton_13_clicked()
{
    Boutique b1;
    b1.set_nom(ui->lineEdit_8->text());
    bool test=b1.supprimer(b1.get_ref());
    if(test)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                       QObject::tr("suppression effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
           ui->tableView->setModel(b.afficher());

   }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                       QObject::tr("suppression non effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
   }






