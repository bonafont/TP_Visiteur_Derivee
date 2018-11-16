#include "Expression.h"
#include "Variable.h"
#include "Constante.h"
#include "Plus.h"
#include "Fois.h"
//
// Created by anthony on 11/16/18.
//
class VisitorDerivée {
public:
    Expression* visite(Variable);
    Expression* visite(Constante);
    Expression* visite(Plus);
    Expression* visite(Fois);
};

