#include <stdlib.h>
#include <stdio.h>

typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  if (aux == NULL) exit(100); // allocazione non riuscita
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

Lista* ricerca(Lista* pl, int d) {
  while (*pl)
    pl = &(*pl)->next;
  return pl;
}

void insCoda(Lista* pl, int d) {
  pl = ricerca(pl, d);
  insTesta(pl, d);
}