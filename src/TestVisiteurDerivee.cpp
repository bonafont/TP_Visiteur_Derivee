#include <iostream>
/**
Test des fonctionnalités de la hiérarchie (Expression, Variable, Constante, OpBinaire, Plus, Fois).
Cette hiérarchie sert à représenter, sous forme d'arbre, des fonctions maths de la forme :
x |---> x
x |---> -7
x |---> 18*x
x |---> 4*x*x + 11*x +- 6
x |---> (x - 2)*(x + 3)
etc.

Cette hiérarchie est munie des fonctionnalit�s : �valuer et conversion en string

Elle est munie d'un visiteur qui permet d'ajouter d'autres fonctionnalit�s. 
Ce visiteur permet d'ajouter le calcul de d�riv�e

*/
using namespace std;

#include "../include/Expression.h"
#include "../include/Variable.h"
#include "../include/Constante.h"
#include "../include/Plus.h"
#include "../include/Fois.h"
#include "../include/VisitorDerivee.h"

int main()
{
Expression * e, * e1, * e2, * e3, * e4, * e5, * e6, *resDerivee;

// on va construire la fct f : x |--->  f(x) = x^2 + x - 6
// on va la construire sous forme factorisée : f(x) = (x - 2)(x + 3)

e1 = new Variable;
e2 = new Constante(-2);
e3 = new Plus(e1,e2);		// on a construit x |---> x - 2

e4 = new Variable;
e5 = new Constante(3);
e6 = new Plus(e4,e5);		// on a construit x |--> x + 3

e = new Fois(e3,e6); // on a construit x |---> (x - 2)(x + 3)

resDerivee = e->accept(new VisitorDerivee());

cout << "e1 = " << e1 << endl;		// doit afficher e1 = x
cout << "e2 = " << e2 << endl;		// doit afficher e2 = -2
cout << "e = " << e << endl;		// doit afficher e = ((x+-2)*(x+3))
cout << "resDerivee = " << resDerivee << endl; // doit afficher la dérivée de e

//------------ on teste l'évaluation de l'expression construite ------------------------------

double x = 7; 
double y = e->evaluer(x); // doit obtenir (7-2)(7+3) = 5*10 = 50

cout << "Evaluation pour x = " << x <<", on obtient : " << y << endl;

// -------------------- on teste le clonage -----------------------------

Expression * copie = e->clone();

// on modifie l'arbre original
((Constante *)e2)->valeur = -4;
((Constante *)e5)->valeur = 1;

cout << "copie = " << copie << endl;	// doit afficher copie = ((x+-2)*(x+3))
cout << "e = " << e << endl;			// doit afficher e = ((x+-4)*(x+1))

// -------------------------- on teste le destructeur virtuel --------------------

delete copie;
delete resDerivee;

cout << "la copie a été effacée, e = " << e << endl;			// doit afficher e = ((x+-4)*(x+1))1
//-------------- la suite doit faire planter le pgm car l'arbre copie n'existe plus --------------------------

//char ch; cin >> ch;

//cout << "copie = " << copie << endl;	// se plante

delete e;

return 0;
}