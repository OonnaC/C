#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "TAD_ABR.h"


// creation d'un ABR (retourne un acc�s � une feuille-racine initialis�e) 
ABR creer_feuilleABR(Info v)
{
  ABR abr = (ABR)malloc(sizeof(Noeud));

  abr->val = v;
  abr->g = NULL;
  abr->d = NULL;

  return abr;
}

// teste si un ABR est vide
int est_videABR(ABR abr)
{
  return (abr == NULL);
}

// teste si un ABR est une feuille
int est_feuilleABR(ABR abr)
{
  assert(!(abr==NULL));		/* l'arbre ne doit pas �tre vide */
  return (est_videABR(abr->g) && est_videABR(abr->d));
}

// rend la valeur de la racine d'un ABR
Info valracABR(ABR abr)
{
  assert(!(abr==NULL));		/* l'arbre ne doit pas �tre vide */
  return (abr->val);
}

// retourne le fils gauche d'un ABR
ABR gaucheABR(ABR abr)
{
  assert(!(abr==NULL));		/* l'arbre ne doit pas �tre vide */  
  return abr->g;
}

// retourne le fils droit d'un ABR
ABR droitABR(ABR abr)
{
  assert(!(abr==NULL));		/* l'arbre ne doit pas �tre vide */
  return abr->d;
}

// lib�re la m�moire allou�e � un ABR
void detruireABR(ABR abr)
{
  if (abr!=NULL) {
                 detruireABR(abr->g);
                 detruireABR(abr->d);
                 free(abr);
                 }     
}
