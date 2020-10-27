#include <stdio.h>
/*Scrivere un programma che stampi tutti i divisori primi di un numero intero richiesto dall'utente*/

main(){
    int n,i;
    
    printf("Inserisci il numero desiderato: \n");
    scanf("%d", &n);

    for(i = 2; i <= n; i++){
        //i assume la sequenza di valori 1, 2 fino a numeri
        int j,cont;
        cont = 0;//contatore dei divisori
        for(j = 2; j <= i-1; j++){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 0){
            printf("Il numero %d è un divisore primo del numero %d.\n",i,n);
        }
    }
}