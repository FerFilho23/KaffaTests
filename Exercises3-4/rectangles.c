#include "funcs.h"
#include <string.h>

int main(){
    Rectangle rect[MAX]; 
    int num = 0;
    char aux = 'A';

    printf("Enter the numbers of rectangles: ");
    scanf("%d", &num);


    while (num > 27)
    {
        printf("MAXIMUM NUMBER OF RECTANGLES EXCEEDED!!\n");
        printf("Enter the numbers of rectangles: ");
        scanf("%d", &num);
    }

    printf("Enter bottom left and top right points coordinates: x1 y1 x2 y2\n");
    
    for (int i = 0; i < num; i++)   //Create the rectangle
    {
        rect[i].id = aux;
        printf("%c : ", aux);
        scanf(" %d %d %d %d", &rect[i].x1, &rect[i].y1, &rect[i].x2, &rect[i].y2);
        rect[i].width = rect[i].x2 - rect[i].x1;        //Calculate the width 
        rect[i].height = rect[i].y2 - rect[i].y1;       //Calculate the height
        aux++;
    }

    for (int i = 0; i < num; i++)   //Check for intersections and its areas
    {
        for (int j = i+1; j < num; j++)
        {   
            if(!intersects(rect[i], rect[j])){
                areaOfIntersection(rect[i], rect[j]);            
            }
        }
    }

    return 0;  
}