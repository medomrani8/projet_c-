#ifndef BOUTIQUE_H
#define BOUTIQUE_H

#include<QString>
#include<QSqlQueryModel>


class boutique
{
public:
    boutique();
   boutique(QString,QString,QString,int,int);
   QString get_ID_boutique();
  QString get_nom_boutique();
  QString get_adresse();
  int get_nbr_employees();
  int get_horaire();
  void set_ID_boutique(QString);
  void set_nom_boutique(QString);
  void set_adresse(QString);
  void set_nbr_employees(int);
  void  set_horaire(int);
   bool ajouter();
   QSqlQueryModel* afficher();
    bool supprimer(QString);
     bool modifier(QString,QString,QString,int,QTime);


private:
    QString ID_boutique;
   QString nom_boutique;
   QString adresse;
   int nbr_employees;
   int nbr_heure;

};

#endif // BOUTIQUE_H
