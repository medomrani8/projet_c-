#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "commande.h"

#include <QMainWindow>
#include"boutique.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



    void on_ajouter_commande_clicked();

    void on_supprimer_commande_clicked();

    void on_ajouter_boutique_clicked();

    void on_supprimer_boutique_clicked();

    void on_bar_ajoutC_clicked();

    void on_bar_modifC_clicked();

    void on_bar_afficheC_clicked();



    void on_bar_suppC_clicked();

    void on_bar_ajoutB_clicked();

    void on_bar_modifB_clicked();

    void on_bar_affichB_clicked();

    void on_bar_suppB_clicked();

    void on_home1_clicked();

    void on_home2_clicked();

private:
    Ui::MainWindow *ui;
    commande c;
    boutique b;
};
#endif // MAINWINDOW_H
