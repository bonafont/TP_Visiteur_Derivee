#pragma once
#include "Expression.h"


/**
Représente la fonction : x |---> K où K est une constante comme dans : x |---> 5 par exemple
*/
class Constante : public Expression
{
public:	
double valeur;	// valeur de la constante

/**

crée la fonction constante : x |---> valeur
*/
Constante( const double & valeur);
/**
Retourne une copie de l'arbre représentant f
*/
virtual Expression * clone () const;

virtual operator string() const;

/**
Calcule la valeur de f(x)
*/
virtual double evaluer(const double & x) const;

virtual Expression* accept( Visitor*);

};

