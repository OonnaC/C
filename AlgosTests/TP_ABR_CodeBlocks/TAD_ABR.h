//  TAD ABR


// Types pour implanter le TAD ABR
typedef int Info;

typedef struct noeud {
  Info val;
  struct noeud *g, *d;
} Noeud;

typedef Noeud *ABR; //pointeur de noeud


// creation d'un ABR (retourne un accès à une feuille-racine initialisée)
ABR creer_feuilleABR(Info v);

// teste si un ABR est vide
int est_videABR(ABR abr);

// teste si un ABR est une feuille
int est_feuilleABR(ABR abr);

// rend la valeur de la racine d'un ABR
Info valracABR(ABR abr);

// retourne le fils gauche d'un ABR
ABR gaucheABR(ABR abr);

// retourne le fils droit d'un ABR
ABR droitABR(ABR abr);

// libère la mémoire allouée à un ABR
void detruireABR(ABR abr);
