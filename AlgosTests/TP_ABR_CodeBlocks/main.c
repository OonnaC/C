#include <stdio.h>
#include <stdlib.h>
#include "TAD_ABR.h"

// Fonctions à écrire...

ABR ajout_f(Info v, ABR A)
{
    if (est_videABR (A)){

        return creer_feuilleABR(v);

    }else{
        if (v <= valracABR(A)){
                A-> g = ajout_f(v, gaucheABR(A));

        }else{
            A-> d = ajout_f(v, droitABR(A));

        }
        return A;
    }
}

void affiche_prefixeABR(ABR A)
{
    if (est_videABR (A)){

            return;

    }else{
        printf("%d",valracABR(A));
        if (!est_videABR(gaucheABR(A))){
            putchar('(');
            affiche_prefixeABR(gaucheABR(A));
            putchar(')');
        }
        if (!est_videABR(droitABR(A))){
            putchar('(');
            affiche_prefixeABR(droitABR(A));
            putchar(')');
        }
    }
}

void affiche_infixeABR(ABR A)
{
    if (est_videABR (A)){

            return;

    }else{

        if (!est_videABR(gaucheABR(A))){
            putchar('(');
            affiche_infixeABR(gaucheABR(A));
            putchar(')');
        }
        printf("%d",valracABR(A));

        if (!est_videABR(droitABR(A))){
            putchar('(');
            affiche_infixeABR(droitABR(A));
            putchar(')');
        }
    }
}

void affiche_postfixeABR(ABR A)
{
    if (est_videABR (A)){

            return;

    }else{

        if (!est_videABR(gaucheABR(A))){
            putchar('(');
            affiche_postfixeABR(gaucheABR(A));
            putchar(')');
        }

        if (!est_videABR(droitABR(A))){
            putchar('(');
            affiche_postfixeABR(droitABR(A));
            putchar(')');
        }

        printf("%d",valracABR(A));
    }
}

int main()
{
    ABR A = NULL;
    A = ajout_f(10, A);
    A = ajout_f(7, A);
    A = ajout_f(20, A);
    A = ajout_f(3, A);
    A = ajout_f(8, A);
    A = ajout_f(15, A);
    A = ajout_f(30, A);
    affiche_prefixeABR(A);
    printf("\n");
    affiche_infixeABR(A);
    printf("\n");
    affiche_postfixeABR(A);

    return 0;
}
