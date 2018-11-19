#include "../include/Variable.h"
#include "../include/Visitor.h"
/**
Retourne une copie de l'arbre représentant f
*/
/*virtual*/ Expression * Variable::clone () const
{
return new Variable;
}

///**
//Conversion de f en string
//*/
//virtual const string toString() const = 0;

/*virtual*/ Variable::operator string() const
{
return "x";
}

/**
Calcule la valeur de f(x)
*/
/*virtual*/ double Variable::evaluer(const double & x) const
{
return x;
}
Expression* Variable::accept( Visitor* visitor){
    return visitor->visite(this);
}