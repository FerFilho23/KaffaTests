#ifndef VALIDATE_C_INCLUDED
#define VALIDATE_C_INCLUDED

#include "validate.h"
#include "string.h"

int validate_format(char CNPJ[]){
    int i = 0;

    if (strlen(CNPJ) != MIN && strlen(CNPJ) != MAX) //The CNPJ doesn't have the 14 or 18 digits necessary for a valid format
    {
       printf("FORMAT ERROR: invalid size\n");
    }
    else if (strlen(CNPJ) == MIN)    //Check for Numbers only
    {
        while (i < MIN) {       //Search for letters
            if (CNPJ[i] < 48 || CNPJ[i]> 57){     
                printf("FORMAT ERROR: letter found\n");
                return 0;
            }
            i++;
        }
        return 1;

    }
    else if (strlen(CNPJ) == MAX) //Check for Formatted
    {
        i = 0;
        if (CNPJ[2] != '.' || CNPJ[6] != '.' || CNPJ[10] != '/' || CNPJ[15] != '-'){ // "00.000.000/0000-00" check for the 4 separation characters 
            printf("FORMAT ERROR: invalid separation characters\n");
            return 0;        
        }
        while (i < MAX) {   //Search for letters
            if(i != 2 && i != 6 && i != 10 && i != 15){
                if (CNPJ[i] < 48 || CNPJ[i]> 57){     
                    printf("FORMAT ERROR: letter found\n");
                    return 0;
                }    
            }
            i++;
        }
        return 1;        
    }
    
    return 0; 
}

int validate_digits(char CNPJ[]){
    int sum1, sum2, digit1, digit2;
    
    if (strlen(CNPJ) == MIN) // Numbers Only
    {
        //Sum of the digits with its weights - convert digit char CNPJ[i] to int
        sum1 = (((CNPJ[0]-'0') * 5) + ((CNPJ[1]-'0') * 4) + ((CNPJ[2]-'0') * 3) + ((CNPJ[3]-'0') * 2) + ((CNPJ[4]-'0') * 9) + ((CNPJ[5]-'0') * 8) + ((CNPJ[6]-'0') * 7) + ((CNPJ[7]-'0') * 6) + ((CNPJ[8]-'0') * 5) + ((CNPJ[9]-'0') * 4) + ((CNPJ[10]-'0') * 3) + ((CNPJ[11]-'0') * 2));

        digit1 = sum1 % 11;     // Authentication Digit 1
        if (digit1<2)
        {
           digit1 = 0;
        }else{
            digit1 = 11-digit1; 
        }

        //Sum of the digits with its weights + 1st verification digit
        sum2 = (((CNPJ[0]-'0') * 6) + ((CNPJ[1]-'0') * 5) + ((CNPJ[2]-'0') * 4) + ((CNPJ[3]-'0') * 3) + ((CNPJ[4]-'0') * 2) + ((CNPJ[5]-'0') * 9) + ((CNPJ[6]-'0') * 8) + ((CNPJ[7]-'0') *7) + ((CNPJ[8]-'0') * 6) + ((CNPJ[9]-'0') * 5) + ((CNPJ[10]-'0') * 4) + ((CNPJ[11]-'0') * 3) + (digit1 * 2));
             
        digit2 = sum2 % 11;     // Authentication Digit 2
        if (digit2<2)
        {
           digit2 = 0;
        }else{
            digit2 = 11-digit2;
        }

        if (digit1 != (CNPJ[12] - '0') || digit2 != (CNPJ[13] - '0'))
        {
           printf("AUTHENTICATION ERROR: invalid authentication digits\n");
           return 0;
        }

    }
    else if (strlen(CNPJ) == MAX) //Formatted
    {
        //Sum of the digits with its weights - convert digit char CNPJ[i] to int - ignore separation characters
        sum1 = (((CNPJ[0]-'0') * 5) + ((CNPJ[1]-'0') * 4) + ((CNPJ[3]-'0') * 3) + ((CNPJ[4]-'0') * 2) + ((CNPJ[5]-'0') * 9) + ((CNPJ[7]-'0') * 8) + ((CNPJ[8]-'0') * 7) + ((CNPJ[9]-'0') * 6) + ((CNPJ[11]-'0') * 5) + ((CNPJ[12]-'0') * 4) + ((CNPJ[13]-'0') * 3) + ((CNPJ[14]-'0') * 2));

        digit1 = sum1 % 11;
        if (digit1<2)
        {
           digit1 = 0;
        }else{
            digit1 = 11-digit1;
        }

        //Sum of the digits with its weights + 1st verification digit - ignore separation characters
        sum2 = (((CNPJ[0]-'0') * 6) + ((CNPJ[1]-'0') * 5) + ((CNPJ[3]-'0') * 4) + ((CNPJ[4]-'0') * 3) + ((CNPJ[5]-'0') * 2) + ((CNPJ[7]-'0') * 9) + ((CNPJ[8]-'0') * 8) + ((CNPJ[9]-'0') *7) + ((CNPJ[11]-'0') * 6) + ((CNPJ[12]-'0') * 5) + ((CNPJ[13]-'0') * 4) + ((CNPJ[14]-'0') * 3) + (digit1 * 2));
             
        digit2 = sum2 % 11;
        if (digit2<2)
        {
           digit2 = 0;
        }else{
            digit2 = 11-digit2;
        }

        if (digit1 != (CNPJ[16] - '0') || digit2 != (CNPJ[17] - '0'))
        {
           printf("AUTHENTICATION ERROR: invalid CNPJ\n");
           return 0;
        }
    }

    return 1;
}

#endif // VALIDATE_C_INCLUDED
