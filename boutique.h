#ifndef BOUTIQUE_H
#define BOUTIQUE_H

#include<QString>
#include<QSqlQueryModel>

class Boutique
{
public:
    Boutique();
    Boutique(QString,QString,int);
    QString get_nom();
    QString get_ref();
    int get_nbr();
    void set_nom(QString);
    void set_ref(QString);
    void set_nbr(int);
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(QString);
     void modifier(QString,QString,int);
private:
     QString nom_produit;
     QString ref_commande;
     int nbr_produit;


};

#endif // BOUTIQUE_H
