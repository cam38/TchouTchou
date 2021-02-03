#ifndef CASERAIL_H
#define CASERAIL_H


class caseRail : public Case
{
protected:
    
    int type_case = 1 ; 
    // 0 : case vide
    // 1 : traversé horizontale
    // 2 : traversé verticale
    // 3 : coin bas droit
    // 4 : coin bas gauche
    // 5 : coin haut droit
    // 6 coin haut gauche
    
    
public :
    
    void afficher();
};

#endif // CASERAIL_H
