#include <stdio.h>
/*Scrivere un programma che scriva in uscita la fattorizzazione in numeri primi del numero ricevuto in ingresso.*/
main() {
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
            int esponente = 0;
            while( n % i == 0){
                n = n / i;
                esponente++;
            }
            printf("%d",i);
            if(esponente > 1){
                printf("^%d", esponente);
            }
            if(n > 1){//ci sono altri divisori
                printf(" x ");
            }
        }
    }
}