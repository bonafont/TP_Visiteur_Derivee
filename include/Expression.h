#pragma once

#include <iostream>
#include <string>

class Visitor;

using namespace std;

/**

Repr�sente une fonction mathématique réelle à une variable réelle, autrement dit une fonction f de la forme :

x |---> f(x)		où x et f(x) sont des nombres réels

Evidemment en machine, f est représentée par un arbre

*/
class Expression
{
public:
/**
Efface l'arbre représentant f
*/
virtual ~Expression(void);

/**
Retourne une copie de l'arbre repr�sentant f
*/
virtual Expression * clone () const = 0;

virtual operator string() const = 0;

/**
Calcule la valeur de f(x)
*/
virtual double evaluer(const double & x) const = 0;

virtual Expression* accept(const Visitor*)const=0;
};

ostream & operator << ( ostream & os, const Expression * expression);