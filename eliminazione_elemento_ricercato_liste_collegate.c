#include <malloc.h>
typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

Lista* ricerca(Lista* pl, int d) {
  while (*pl) {
    if ((*pl)->dato == d)
      break;
    pl = &(*pl)->next;
  }
  return pl;
}

void elimTesta(Lista* pl) {
  Nodo* aux = *pl;
  *pl = (*pl)->next;
  free(aux);
}

int elim1(Lista* pl, int d) {
  pl = ricerca(pl, d);
  if (*pl) {
    elimTesta(pl);
    return 1;
  } else
    return 0;
}