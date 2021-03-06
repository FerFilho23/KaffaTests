# Exercises 3 & 4

This program contains the answer to both exercises 3 and 4. The structure consists of four files:
* funcs.h - a header file for the inclusion of libraries, declaration of functions and definition of macros;
* funcs.c - contains the implementation of the functions;
* rectangles.c -  contains the main code of the program;
* Makefile - contains the script for compiling the program;
----------------------------------------------------------------------------------------------------------------------
## Compilation & Execution

Follow the next steps and copy/paste the commands below to the Terminal:

1.  Clone the repository
      
      $ git clone https://github.com/FerFilho23/KaffaTests.git
   
2.  Go to the KaffaTests repository and enter the "Exercise3-4" folder
      
      $ cd KaffaTests/Exercises3-4/

3.  Compilation & Execution

      $ make Rectangles
      
The program will be compiled and ready for execution. First type the numbers of triangles to be analyzed, the program can compute a maximum of 27 rectangles simultaneously. Then, for each rectangle, type four integers representing  the coordinates of the bottom left and the top right points. The program uses a struct called "Rectangle" which stores the id, coordinates, width and height of the rectangles being analyzed. 
      
### Exercise 3: Test if two rectangles intersect.

Considering two rectangles in a discrete grid (like pixels in a display), each defined by two points, return true if they intersect, false otherwise.

NOTE: the points are included in the rectangles and have a dimension of 1 unit; the rectangle (0, 0; 1, 1) has an area of 4 units.

For this exercise, the function "intersects(Rectangle A, Reactangle B)" will check if a point of one rectangle is in range of the width/height of the other. If true, the program will return "intersects(A, B) => true", otherwise it will return "intersects(A, B) => false".

### Exercise 4: Compute area of intersection between two rectangles.

If the rectangles of the previous exercise intersect, compute the area of intersection. For this exercise the functions "areaOfIntersection(Rectangle A, Rectangle B)", "min(int a, int b)" and "max(int a, int b)" compute the intersection width and height so that the area can be computed bt the following formula:

AreaOfIntersection = Intersection_Width x Intersection_Height.

![Ex3-4](https://github.com/FerFilho23/KaffaTests/blob/main/Exercises3-4/img/Ex3-4.png)
