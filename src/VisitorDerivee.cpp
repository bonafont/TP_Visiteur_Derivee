#include "../include/VisitorDerivee.h"

Expression* VisitorDerivee::visite(Constante * constante) {
    return nullptr;
}

Expression* VisitorDerivee::visite(Variable * variable) {
    return nullptr;
}

Expression* VisitorDerivee::visite(Plus * plus) {
    return nullptr;
}

Expression* VisitorDerivee::visite(Fois * fois) {
    return nullptr;
}
