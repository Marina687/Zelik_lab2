#include "stdio.h"
#define _USE_MATH_DEFINES
#include <stdlib.h>
#include "stdbool.h"

double f(double x)
{ 
    if (x <= 3.0)
    {
        return x*x + 3.0*x + 9.0;
    }
    else
    {
        return 1.0/(x*x*x+6);
    }
}