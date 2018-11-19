#include "Visitor.h"

class VisitorDerivee : public Visitor{
public:
    virtual Expression* visite(Variable*);
    virtual Expression* visite(Constante*);
    virtual Expression* visite(Plus*);
    virtual Expression* visite(Fois*);
    VisitorDerivee();
};

