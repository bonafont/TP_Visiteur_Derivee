#include "Fois.h"
#include "Variable.h"
#include "Plus.h"
#include "Constante.h"

class Visitor{
public:
    virtual Expression* visite(Variable*)=0;
    virtual Expression* visite(Constante*)=0;
    virtual Expression* visite(Plus*)=0;
    virtual Expression* visite(Fois*)=0;
};
