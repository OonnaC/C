#include <stdio.h>
#include <stdlib.h>
#include "TAD_ABR.h"

// Fonctions à écrire...

ABR ajout_f(Info v, ABR A)
{
    if (est_videABR (A)){

        return creer_feuilleABR(v);

    }else{
        if (v <=S valracABR(A)){
                A-> g = ajout_f(v, gaucheABR(A));

        }else{
            A-> d = ajout_f(v, droitABR(A));
S
        }
        return A;
    }
}


int main()
{
    //chaine = ajout_f(10,);
    printf(chaine);
    return 0;
}
