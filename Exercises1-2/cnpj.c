#include "validate.h"
#include <string.h>

int main(){
    char CNPJ[MAX];

    printf("Enter your CNPJ: ");
    scanf(" %s", CNPJ);

    if(validate_format(CNPJ) && validate_digits(CNPJ))
        printf("CNPJ %s is valid\n", CNPJ);
    
    return 0; 
}