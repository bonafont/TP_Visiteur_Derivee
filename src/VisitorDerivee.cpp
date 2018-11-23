#include "../include/VisitorDerivee.h"

Expression* VisitorDerivee::visite(const Constante * constante) const{
    return new Constante(0);
}

Expression* VisitorDerivee::visite(const Variable * variable)const {
    return new Constante(1);
}

Expression* VisitorDerivee::visite(const Plus * plus)const{
    return new Plus(plus->getOpGauche()->accept(this),plus->getOpDroite()->accept(this));
}

Expression* VisitorDerivee::visite(const Fois * fois) const{
    return new Plus(new Fois(fois->getOpGauche()->accept(this),fois->getOpDroite()),new Fois(fois->getOpGauche(),fois->getOpDroite()->accept(this)));
}

VisitorDerivee::VisitorDerivee() {}