#include "../include/VisitorDerivee.h"

Expression* VisitorDerivee::visite(const Constante * constante) const{
    return new Constante(0);
}

Expression* VisitorDerivee::visite(const Variable * variable)const {
    return new Constante(1);
}

Expression* VisitorDerivee::visite(const Plus * plus)const{
    return new Plus(plus->getOpGauche()->accept(this)->clone(),plus->getOpDroite()->accept(this)->clone());
}

Expression* VisitorDerivee::visite(const Fois * fois) const{
    return new Plus(new Fois(fois->getOpGauche()->accept(this)->clone(),fois->getOpDroite()->clone()),new Fois(fois->getOpGauche()->clone(),fois->getOpDroite()->accept(this)->clone()));
}

VisitorDerivee::VisitorDerivee() {}