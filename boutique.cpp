#include "boutique.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
Boutique::Boutique()
{
   nom_produit="" ;
     nbr_produit=0;
   ref_commande="";
    }

Boutique::Boutique(QString nom_produit ,QString ref_commande , int nbr_produit)
{
    this->nom_produit=nom_produit;
    this->ref_commande=ref_commande;
    this->nbr_produit=nbr_produit;
}

QString Boutique::get_nom(){return nom_produit;}
QString Boutique::get_ref() { return ref_commande;}
int Boutique::get_nbr(){return nbr_produit;}

void Boutique::set_nom(QString nom_produit){this->nom_produit=nom_produit;}
void Boutique::set_ref(QString ref_commande){this->ref_commande=ref_commande;}
void Boutique::set_nbr(int nbr_produit){ this->nbr_produit=nbr_produit;}



bool Boutique::ajouter(){

     QSqlQuery query;
     QString nbr_string=QString::number(nbr_produit);
     query.prepare("INSERT INTO ingredient (nom_produit,ref_commande, nbr_produit) "
                             "VALUES (:nom_produit, :ref_commande, :nbr_produit)");

             query.bindValue(":nom_produit",nom_produit);
             query.bindValue(":ref_commande",ref_commande);
             query.bindValue(":nbr_produit",nbr_string);
             return  query.exec();



}



 bool Boutique::supprimer(QString ref_commande)
 {
     QSqlQuery query;
     QString nbr_string=QString::number(nbr_produit);
     query.prepare("DELETE from ingredient where ref_commande=:ref_commande");
      query.bindValue(0,ref_commande );

      return  query.exec();

 }


 QSqlQueryModel* Boutique::afficher()
 {

      QSqlQueryModel*model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM boutique");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("ref_commande"));
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_produit"));
           model->setHeaderData(0, Qt::Horizontal, QObject::tr("nbr_produit"));

      return model;
 }
