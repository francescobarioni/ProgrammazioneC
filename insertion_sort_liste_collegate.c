typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void insertionSort(Lista* pl1) {
  Lista l2;
  nuovaLista(&l2);//serve la funzione nuova lista
  while (*pl1) {
    insOrd(&l2, (*pl1)->dato);//serve la funzione inserimento ordinato
    elimTesta(pl1);//serve la funzione eliminazione in tesa
  }
  *pl1 = l2;
}