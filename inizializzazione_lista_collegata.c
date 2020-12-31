  
#include <stdlib.h>

typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

//inizializzione a NULL di una lista collegata
void nuovaLista(Lista* pl) {
  *pl = NULL;
}

