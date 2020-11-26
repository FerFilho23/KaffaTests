#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED
#define MAX 27 // rectagles A to Z
#define MIN(A,B)

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
   char id;
   int x1, y1; //Bottom Left 
   int x2, y2; //Top Right
   int width, height;
} Rectangle;


int intersects(Rectangle, Rectangle);
int inRange(int , int , int);
int areaOfIntersection(Rectangle, Rectangle);
int min(int, int);
int max(int, int);

#endif // VALIDATE_H_INCLUDED
