typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

Lista* ricerca(Lista* pl, int d) {
  while (*pl) {
    if ((*pl)->dato > d)
      break;
    pl = &(*pl)->next;
  }
  return pl;
}

void insOrd(Lista* pl, int d) {
  pl = ricerca(pl, d);
  insTesta(pl, d);
}