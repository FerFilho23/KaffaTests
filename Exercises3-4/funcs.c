#ifndef FUNCS_C_INCLUDED
#define FUNCS_C_INCLUDED

#include "funcs.h"
#include "string.h"
#include <stdlib.h>

int intersects(Rectangle A, Rectangle B){    
    // Check if a point of one rectangle is in range of the width/height of the other     
    if (((A.x1 >= B.x1) && (A.x1 <= B.x1+B.width)) || ((B.x1 >= A.x1) && (B.x1 <= A.x1+A.width))) 
    {
        if (((A.y1 >= B.y1) && (A.y1 <= B.y1+B.height)) || ((B.y1 >= A.y1) && (B.y1 <= A.y1+A.height)))
        {
            printf("intersects(%c, %c) => true\n", A.id, B.id);
            return 0;
        }
    }
    printf("intersects(%c, %c) => false\n", A.id, B.id);
    return 1;
}

int areaOfIntersection(Rectangle A, Rectangle B){
    int intersec_width = min(A.x2, B.x2) - max(A.x1, B.x1) + 1;
    int intersec_height = min(A.y2, B.y2) - max(A.y1, B.y1) + 1;

    printf("areaOfIntersection(%c, %c) = %d\n", A.id, B.id, intersec_width*intersec_height);
    return 0;
}

int min(int a, int b){
    if (a < b)
        return a;
    return b;
}

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}


#endif // FUNCS_C_INCLUDED
