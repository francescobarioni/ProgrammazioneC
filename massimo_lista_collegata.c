#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void listaOrdinata(Lista* pl, int n) {
  int a[] = {2, 3, 4, 5, 7, 8, 12, 15, 21, 24};
  int i;
  for (i = 0; i < n; i++) {
    (*pl) = (Nodo*)malloc(sizeof(Nodo));
    (*pl)->dato = a[i];
    (*pl)->next = NULL;
    pl = &(*pl)->next;
  }
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

int massimoLista(Lista l){
    int max = 0;
    while(l){
        if(max < l->dato){
            max = l->dato;
        }
        l = l->next;
    }
    return max;
}

int main(){
    Lista l;
    listaNonOrdinata(&l, 5);
    printf("Il valore maggiore è: %d\n", massimoLista(l));
    return 0;
}