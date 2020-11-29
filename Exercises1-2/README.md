# Exercises 1 & 2

This program contains the answer to both exercise 1 and 2. The structure consists of four files:
* validate.h - a header file  for the inclusion of libraries, declaration of functions and definition of macros;
* validate.c - a file containing the implementation of the functions
* cnpj.c -  wich contains the main code of the program.
* Makefile - contais the script for compiling the program
----------------------------------------------------------------------------------------------------------------------
## Compilation & Execution

Follow the next setps and copy/paste the commands below to the Terminal:

1.  Clone the repository
      
      $  cd git clone https://github.com/FerFilho23/KaffaTests.git
   
2.  Go to the KaffaTests repository and enter the "Exercise1-2" folder
      
      $ KaffaTests/Exercises1-2/

3.  Compile & Execute

      $ make CNPJ
      
### Exercise 1: Validate a CNPJ Format.

Given a string, check if it looks like a CNPJ, considering two formats:

1. Formatted: "00.000.000/0000-00"
2. Numbers only: "00000000000000"

### Exercise 2: Validate CNPJ digits

Given a string validate if it's a well-formed CNPJ, considering the "check digits" as defined by Receita Federal.

To compile and execute this program the next steps:

1. Clone/Downlod the repository 
2. Using the terminal go to the repositories "Exercise1-2" folder
