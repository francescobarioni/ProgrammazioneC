#include <stdio.h>
/*Scrivere un programma che stampi tutti i divisori di un numero intero richiesto dall'utente.*/

main() {
    int n,i;

    printf("Inserisci il numero desiderato: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("Il numero %d è un divisore di %d.\n" ,i,n);
        }
    }
}