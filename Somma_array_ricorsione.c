#include <stdio.h>

//calcolare la somma totale degli elementi di un arrau a partire dall'indice 0 fino 
//all'indice n.

int somma(int a[], int n){
    if(n < 0){
        return 0;
    } else {
        return somma(a,n-1)+ a[n];
    }
}

int main(){
    int a[4] = {6,5,2}, n = 2, s;
    s = somma(a,n);

    printf("La somma totale è %d.\n",s);

    return 0;
}