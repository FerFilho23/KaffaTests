# Exercises 1 & 2

This program contains the answer to both exercises 1 and 2. The structure consists of four files:
* validate.h - a header file  for the inclusion of libraries, declaration of functions and definition of macros;
* validate.c - contains the implementation of the functions;
* cnpj.c -  contains the main code of the program;
* Makefile - contains the script for compiling the program;
----------------------------------------------------------------------------------------------------------------------
## Compilation & Execution

Follow the next steps and copy/paste the commands below to the Terminal:

1.  Clone the repository
      
      $  git clone https://github.com/FerFilho23/KaffaTests.git
   
2.  Go to the KaffaTests repository and enter the "Exercise1-2" folder
      
      $ cd KaffaTests/Exercises1-2/

3.  Compilation & Execution

      $ make CNPJ
      
The program will be compiled and ready for execution. Just type a CNPJ for validation.

![Compile&Execute](https://github.com/FerFilho23/KaffaTests/blob/main/Exercises1-2/img/Compile%26Execute.png)
      
### Exercise 1: Validate a CNPJ Format.

Given a string, check if it looks like a CNPJ, considering two formats:

1. Formatted: "00.000.000/0000-00"
2. Numbers only: "00000000000000"

For this exercise, the function "validate_format(char CNPJ[])" checks if the CNPJ has a minimum size of 14 characters containing only numbers or 18 characters (14 numbers) and four separation characters exactly as the format above. In case the CNPJ does not meet the format requirements an error message will appear:

* "FORMAT ERROR: invalid size" - in case the CNPJ is not within the 14 to 18 characters size range;
* "FORMAT ERROR: invalid character found" - in case the CNPJ is written with a letter;
* "FORMAT ERROR: invalid separation characters" - in case the separation characters are not as specified;

![Ex1](https://github.com/FerFilho23/KaffaTests/blob/main/Exercises1-2/img/Ex1.png)

### Exercise 2: Validate CNPJ digits

Given a string validate if it's a well-formed CNPJ, considering the "check digits" as defined by Receita Federal.

According to Receita Federal, every CNPJ has the last two digits as authentication digits used for validating CNPJ. The function "validate_digits(char CNPJ[])" uses the rules of Receita Federal to calculate the expected last two digits. If the actual digits match the expected ones the CNPJ is valid, otherwise the error message "AUTHENTICATION ERROR: invalid authentication digits" appears.

![Ex2](https://github.com/FerFilho23/KaffaTests/blob/main/Exercises1-2/img/Ex2.png)
