#include <stdio.h>

int somma(int n){
    if(n == 0){
        return 0;
    } else {
        return somma(n - 1) + n;
    }
}

int main(){
    int n;

    printf("Inserisci un numero naturale a piacere:\n");
    scanf("%d", &n);

    printf("La somma totale è %d\n",somma(n));

    return 0;
}