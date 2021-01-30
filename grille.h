#ifndef GRILLE_H
#define GRILLE_H

#include "partie.h"
#include "point.h"
#include "Case.h"

class grille
{
private :
    point entree , sortie, position;
    int nbCase ;
    int ** matriceCase ;


public:
    grille();
    grille(const grille& g);
    ~grille();

    string verifierChemin(const grille& g);
    bool CasesConnectees(const Case& c1, const Case& c2);
    Case * CasesVoisines(const Case& c);
    char directionDeplacement(const Case& c1,const Case& c2);
    void deplacerCase(Case c);
    void afficher(void);
    grille genererGrilleAleatoire(void);

};

#endif // GRILLE_H
