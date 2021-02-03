#ifndef CASE_H
#define CASE_H


class Case
{
protected :
    Point position ;
    
public :
    
    Case();
    
    virtual void afficher() const = 0 ;
    void echanger(Case c1, Case c2) ;
    Point getPosition() ;
    void setPosition(Point p) ;
    

    
};

#endif // CASE_H
