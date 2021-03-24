#include "commande.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

commande::commande()
{
    nom_produit="" ;
         nbr_produit=0;
       ref_commande="";
}

commande::commande(QString nom_produit ,QString ref_commande , int nbr_produit)
{
    this->nom_produit=nom_produit;
       this->ref_commande=ref_commande;
       this->nbr_produit=nbr_produit;

}


QString commande::get_nom(){return nom_produit;}
QString commande::get_ref() { return ref_commande;}
int commande::get_nbr(){return nbr_produit;}


void commande::set_nom(QString nom_produit){this->nom_produit=nom_produit;}
void commande::set_ref(QString ref_commande){this->ref_commande=ref_commande;}
void commande::set_nbr(int nbr_produit){ this->nbr_produit=nbr_produit;}

bool commande::ajouter(){

     QSqlQuery query;
     QString nbr_string=QString::number(nbr_produit);
     query.prepare("INSERT INTO commande (nom_produit,ref_commande, nbr_produit) "
                             "VALUES (:nom_produit, :ref_commande, :nbr_produit)");

             query.bindValue(":nom_produit",nom_produit);
             query.bindValue(":ref_commande",ref_commande);
             query.bindValue(":nbr_produit",nbr_string);
             return  query.exec();



}


bool commande::supprimer(QString ref_commande)
{
    QSqlQuery query;
    query.prepare("DELETE from commande where ref_commande=:ref_commande");
     query.bindValue(0,ref_commande);

     return  query.exec();

}

QSqlQueryModel* commande::afficher()
 {

      QSqlQueryModel*model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM commande");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_produit"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("ref_commande"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_produit"));

      return model;
 }



