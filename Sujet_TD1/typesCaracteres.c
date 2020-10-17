#include <stdio.h>
#include <stdlib.h>

int main(){
    int CARAC;

    printf("Entrez un caractère : " );
    scanf("%d", &CARAC);

    if (CARAC >='0' && CARAC <='9')
    {
         printf("Chiffre \n");
    }
    else if (CARAC >='A' && CARAC <='Z')
    {
       printf("Majuscule \n");
    }

    else if (CARAC >='a' && CARAC <='z')
    {
        printf("Minuscule \n");
    }

    else
    {
        printf("Pas alphanumérique");
    }

    return 0;
}
