#include "Visitor.h"

class VisitorDerivee : public Visitor{
public:
    virtual Expression* visite(const Variable*)const;
    virtual Expression* visite(const Constante*)const;
    virtual Expression* visite(const Plus*)const;
    virtual Expression* visite(const Fois*)const;
    VisitorDerivee();
};

