#include <stdio.h>
#include <stdlib.h>

int main(char inpath[])
{
    //ouverture du fichier alice.txt
    FILE* infile = fopen("alice.txt","r") ;
    //vérification de l'ouverture
    if( (infile == NULL)){
            printf("Erreur ouverture fichier \n") ;
            return EXIT_FAILURE ;
    }
    //lecture d'une ligne du fichier
    while(fgets(inpath,256,infile)){

    }

    //fermeture du fichier
    fclose(infile);
    return 0;
}
