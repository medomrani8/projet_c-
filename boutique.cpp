#include "boutique.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

boutique::boutique()
{
     ID_boutique="";
    nom_boutique="";
   adresse="";
    nbr_employees=0;
    nbr_heure=0;
}


boutique::boutique(QString  ID_boutique,QString   nom_boutique,QString adresse,int nbr_employees,int nbr_heure)
{
    this->ID_boutique=ID_boutique;
    this-> nom_boutique= nom_boutique;
    this->adresse=adresse;
    this-> nbr_employees= nbr_employees;
    this-> nbr_heure= nbr_heure;
}

QString boutique::get_ID_boutique(){return ID_boutique;}
QString boutique::get_nom_boutique(){return nom_boutique ;}
QString boutique::get_adresse(){return adresse;}
int boutique::get_nbr_employees(){return nbr_employees;}
int boutique::get_horaire(){return nbr_heure;}


void boutique::set_ID_boutique(QString ID_boutique){this->ID_boutique=ID_boutique;}
void boutique::set_nom_boutique(QString nom_boutique){this->nom_boutique=nom_boutique;}
void boutique::set_adresse(QString adresse){this->adresse=adresse;}
void boutique::set_nbr_employees(int nbr_employees){this->nbr_employees=nbr_employees;}
void  boutique::set_horaire(int nbr_heure){this-> nbr_heure= nbr_heure;}


 bool boutique::ajouter(){

     QSqlQuery query;
    QString nbre_string=QString::number( nbr_employees);
      QString nbrh_string=QString::number( nbr_heure);
      query.prepare("INSERT INTO boutique (ID_boutique,nom_boutique,adresse, nbr_employees,nbr_heure) "
                              "VALUES (:ID_boutique,:nom_boutique, :adresse, :nbr_employees,:nbr_heure)");

        query.bindValue(":ID_boutique",ID_boutique);
          query.bindValue(":nom_boutique",nom_boutique);
          query.bindValue(":adresse",adresse);
           query.bindValue(":nbr_employees",nbre_string);
             query.bindValue(":nbr_heure", nbrh_string);
              return  query.exec();

}




 QSqlQueryModel* boutique::afficher()
 {

     QSqlQueryModel*model=new QSqlQueryModel();
     model->setQuery("SELECT * FROM boutique");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_boutique"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_boutique"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbr_employees"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbr_heure"));

     return model;

 }

 bool boutique::supprimer(QString ID_boutique)
 {
     QSqlQuery query;
     query.prepare("DELETE from boutique where ID_boutique=:ID_boutique");
      query.bindValue(0,ID_boutique);

      return  query.exec();

 }
