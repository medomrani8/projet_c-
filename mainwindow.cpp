#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"commande.h"
#include<QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui->tableView_Commandes->setModel(b.afficher());

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





void MainWindow::on_ajouter_commande_clicked()
{
    QString nom_produit=ui->lineEdit->text();
       int nbr_produit=ui->lineEdit_2->text().toInt();
        QString ref_commande=ui->lineEdit_3->text();
      commande c (nom_produit,ref_commande,nbr_produit);
        bool test=c.ajouter();
        if(test)
            {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
               ui->tableView_Commandes->setModel(c.afficher());


        }
            else
                QMessageBox::critical(nullptr, QObject::tr("not ok"),
                            QObject::tr("ajout non effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_supprimer_commande_clicked()
{
    commande c1;
    c1.set_ref(ui->lineEdit_8->text());
      bool test=c1.supprimer(c1.get_ref());
      if(test)
         {
             QMessageBox::information(nullptr, QObject::tr("ok"),
                         QObject::tr("suppression effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
             ui->tableView_Commandes->setModel(c.afficher());


     }
         else
             QMessageBox::critical(nullptr, QObject::tr("not ok"),
                         QObject::tr("suppression non effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_ajouter_boutique_clicked()
{
   QString ID_boutique=ui->lineEdit_16->text();
   QString nom_boutique=ui->lineEdit_9->text();
  QString adresse=ui->lineEdit_10->text();
  int nbr_employees=ui->spinBox->text().toInt()  ;
   int nbr_heure=ui->spinBox_3->text().toInt() ;

boutique b( ID_boutique,nom_boutique,adresse,nbr_employees,nbr_heure);

bool test=b.ajouter();
   if(test)
            {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
               ui->tableView_boutique->setModel(b.afficher());


        }
            else
               {
       QMessageBox::critical(nullptr, QObject::tr("not ok"),
                             QObject::tr("ajout non effectuer.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


   }




}
void MainWindow::on_supprimer_boutique_clicked()
{
    boutique b1;
    b1.set_ID_boutique(ui->lineEdit_14->text());

    bool test=b1.supprimer(ui->lineEdit_14->text());
    if(test)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                       QObject::tr("suppression effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
           ui->tableView_boutique->setModel(b.afficher());


   }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                       QObject::tr("suppression non effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_bar_ajoutC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_bar_modifC_clicked()
{
  ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_bar_afficheC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(2);
}


void MainWindow::on_bar_suppC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(3);
}

void MainWindow::on_bar_ajoutB_clicked()
{
      ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_bar_modifB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}

void MainWindow::on_bar_affichB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(3);
}

void MainWindow::on_bar_suppB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(2);
}

void MainWindow::on_home1_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_home2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}
