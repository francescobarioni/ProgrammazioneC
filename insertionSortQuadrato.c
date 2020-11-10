/*Scrivere un programma che:
1) richieda in ingresso un massimo di 10 numeri interi non nulli (fermandosi quando l'utente digita 0)
memorizzandoli in un array;
2)ordini l'array secondo l'ordine crescente dei quadrati dei suoi elementi usando l'algoritmo inserction sort
3) stampare l'array*/

#include <stdio.h>
#define DIM 10

int main(){
    int a[DIM];
    int dimlog = 0; //dimensione logica
    int dl,i;

    do{
        printf("Inserisci un numero intero (0 termina):\n");
        scanf("%d", &a[dimlog]);

        if(a[dimlog] == 0){
            break;
        }

        dimlog++;
    }while(dimlog < DIM);

    //insertion sort
    for(dl = 0; dl < dimlog; dl++){
        int j = dl, m = a[dl];
        while(j > 0 && m*m < a[j - 1]* a[j - 1]){
            a[j] = a[j - 1];
            j--;
        }
        a[j] = m;
    }

    //stampa
    for(i = 0; i < dimlog - 1; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}