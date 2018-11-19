#include "../include/VisitorDerivee.h"

Expression* VisitorDerivee::visite(Constante * constante) {
    return new Constante(0);
}

Expression* VisitorDerivee::visite(Variable * variable) {
    return new Constante(1);
}

Expression* VisitorDerivee::visite(Plus * plus) {
    return new Plus(plus->getOpGauche()->accept(this)->clone(),plus->getOpDroite()->accept(this)->clone());
}

Expression* VisitorDerivee::visite(Fois * fois) {
    return new Plus(new Fois(fois->getOpGauche()->accept(this)->clone(),fois->getOpDroite()->clone()),new Fois(fois->getOpGauche()->clone(),fois->getOpDroite()->accept(this)->clone()));
}

VisitorDerivee::VisitorDerivee() {}