#ifndef COMMANDE_H
#define COMMANDE_H

#include<QString>
#include<QSqlQueryModel>


class commande
{
public:
    commande();
    commande(QString,QString,int);
    QString get_nom();
        QString get_ref();
        int get_nbr();
        void set_nom(QString);
        void set_ref(QString);
        void set_nbr(int);
         bool ajouter();
         QSqlQueryModel* afficher();
         bool supprimer(QString);
         bool modifier(QString,QString,int);
    private:
         QString nom_produit;
         QString ref_commande;
         int nbr_produit;

};

#endif // COMMANDE_H
