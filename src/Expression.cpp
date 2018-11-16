#include "../include/Expression.h"

/*virtual*/ Expression:: ~Expression(void){}

ostream & operator << ( ostream & os, const Expression * expression)
{
return os << (string)(*expression);
}