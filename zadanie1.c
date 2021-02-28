#include "stdio.h"
#define _USE_MATH_DEFINES
#include <stdlib.h>
#include "stdbool.h"

_Bool isInArea(double x, double y)
{ 
    if ((x <= 1)&&(x >= -1)&&(y <= 1)&&(y >= -1))
    {    
        if ( x <= 0 && y > 0 )
            return 0;
    
        return 1;
    }
    return 0;
}


