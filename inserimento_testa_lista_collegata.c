#include <stdio.h>
#include <stdlib.h>

typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

//inserimeno in testa di una lista collegata
void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  if (aux == NULL) exit(100); // allocazione non riuscita
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void listaNonOrdinata(Lista* pl, int n) {
  // gli elementi da inserire nella lista
  int a[] = {6, 2, 3, 2, 4, 7, 0, 2, 5, 1};
  int i;
  // per i che va da 0 a n - 1
  for (i = 0; i < n; i++) {
    // *pl punta a un nuovo nodo
    (*pl) = (Nodo*)malloc(sizeof(Nodo));
    // il cui dato è a[i]
    (*pl)->dato = a[i];
    // e il cui campo next è NULL (cioè *pl ha un solo elemento; eventualmente
    // ne saranno aggiunti altri nelle iterazioni successive)
    (*pl)->next = NULL;
    // assegna a pl l'indirizzo della sua coda
    pl = &(*pl)->next;
  }
}

void stampa(Lista l) {
  while (l) {
    printf("%d ", l->dato);
    l = l->next;
  }
  printf("\n");
}

int main(){
    Lista l;
    listaNonOrdinata(&l,3);
    insTesta(&l,5);
    stampa(l);
    return 0;
}