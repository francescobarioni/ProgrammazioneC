/* Prendere in ingresso un numero intero. Calcolare il numero di cifre dalle quali è composto
e poi, attraverso un ciclo, calcolare il risultato del calcolo spiegato sopra. Infine, stampare 
a video amstrong o non amstrong a seconda che il numero rispetti o meno la condizione */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main() {
    int numero, n;
    int cifre = 0;
    int cifra = 0;
    int valore = 0;
	int somma = 0;
	
    printf("Inserisci il numero desiderato: \n");
    scanf("%d", &numero);

    n = numero;

    //calcolo del numero di cifre del numero inserito   
    if(numero == 0) cifre = 1;//se il numero è 0 la cifra è 1

    while(numero > 0){
        numero = numero / 10;
        cifre++;
    }
    printf("Il numero ha %d cifre.\n", cifre);

    numero = n; //ripristino il valore iniziale del numero inserito
    
    while(numero > 0){
        cifra = numero % 10;
        //elevare a esponente n    
        //calcolo del numero Amstrong
        int i;
        valore = cifra;
        for(i = 0; i < cifre; i++){
            valore = valore * cifra;            
        }
        somma = somma + valore;
        numero = numero / 10;
    }

    //verifica se il numero è un numero Amstrong
    if(n == somma){
        printf("Il numero %d è un numero Amstrong.\n", n);
    } else {
        printf("Il numero %d non è un numero Amstrong.\n", n);
    }
}
