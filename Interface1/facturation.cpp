#include "facturation.h"
#include "Connection.h"
#include "Cl_commande.h"
#include "facturation.h"
#include <iostream>
#include <fstream>
using namespace std;
facturation::facturation() {
    int c=0;
    string mon_fichier = "fact"+ToString(c)+".txt";
    ofstream fichier("mon_fichier.c_str()",  ios::out ); //déclaration du flux et ouverture du fichier

    if (fichier)  // si l'ouverture a réussi
    {
        fichier << o1.getID_commande() << o1.getDateReglement << o1.getAdresse << o1. getDatePay << o1.getDateEmi << o1.getDateLiv << o1.getId_client << o1.getId_article
        fichier.close();  // on referme le fichier
        c =+;
    }
    else  // sinon
        cerr << "Erreur à l'ouverture !" << endl;


}

