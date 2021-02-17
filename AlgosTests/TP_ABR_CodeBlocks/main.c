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

ABR affiche_prefixe(ABR A)
{
    if (est_videABR (A)){

            return;

    }else{
        printf("%d",valracABR(A));
        affiche_prefixe(gaucheABR(A));
        affiche_prefixe(droitABR(A));
    }
}

int main()
{
    //chaine = ajout_f(10,);
    //printf(chaine);
    return 0;
}
