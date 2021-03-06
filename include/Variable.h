#pragma once
#include "Expression.h"

/**
Repr�sente la fonction math�matique : x |---> x

*/
class Variable : public Expression
{
public:

/**
Retourne une copie de l'arbre représentant f
*/
virtual Expression * clone () const;

virtual operator string() const;

/**
Calcule la valeur de f(x)
*/
virtual double evaluer(const double & x) const;

virtual Expression* accept(const Visitor*)const;
};

