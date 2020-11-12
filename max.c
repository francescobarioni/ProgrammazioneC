/* Scrivere un programma che
1 richieda all’utente cinque numeri reali e li inserisca in un array
2 calcoli e stampi l’elemento dell’array di valore assoluto minimo */

#include <stdio.h>
#define DIM 5

int main(){
    int vett[DIM];
    int i;
    int max = 0;

    for(i = 0; i < DIM; i++){
        printf("Inserisci il valore desiderato:\n");
        scanf("%d", &vett[i]);
    }

    for(i = 0; i < DIM; i++){
        if(vett[i] > max){
            max = vett[i];
        }
    }
    printf("Il valore massimo è %d.\n", max);
    return 0;
}