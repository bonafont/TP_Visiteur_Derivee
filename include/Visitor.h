#include "Fois.h"
#include "Variable.h"
#include "Plus.h"
#include "Constante.h"

class Visitor{
public:
    virtual Expression* visite(const Variable*)const=0;
    virtual Expression* visite(const Constante*)const=0;
    virtual Expression* visite(const Plus*)const=0;
    virtual Expression* visite(const Fois*)const=0;
};
