#ifndef CASE_H
#define CASE_H


class Case
{
protected :
    Point position ;
    
public :
    
    Case();
    
    void afficher() ;
    void echanger(Case c1, Case c2) ;
    Point getPosition() ;
    void setPosition(Point p) ;
    

    
};

#endif // CASE_H
