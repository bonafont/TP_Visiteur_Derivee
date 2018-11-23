#include <sstream>
using namespace std;

#include "../include/Constante.h"
#include "../include/Visitor.h"

/**
crée la fonction constante : x |---> valeur
*/
Constante::Constante( const double & valeur):valeur(valeur){}

/**
Retourne une copie de l'arbre représentant f
*/
/*virtual*/ Expression * Constante::clone () const
{
return new Constante(valeur);
}


///**
//Conversion de f en string
//*/
//virtual const string toString() const = 0;

/*virtual*/ Constante::operator string() const
{
ostringstream oss;
oss << valeur;

return oss.str();

}

/**
Calcule la valeur de f(x)
*/
/*virtual*/ double Constante::evaluer(const double & x) const
{
return valeur;
}

Expression* Constante::accept(const Visitor *visitor) const{
    return visitor->visite(this);
}
