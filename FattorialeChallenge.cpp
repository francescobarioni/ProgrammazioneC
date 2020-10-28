/*Leggere da tastiera un intero n a piacere e calcolare il numero di zeri che si trovano alla fine di n!
Come gestire valori enormi come 1000?!*/

#include <stdio.h>

main() {
	int numero;
	
	printf("Inserisci il numero desiderato: \n");
	scanf("%d", &numero);
	
	if(numero == 0){// controllo se il numero inserito è 0 (caso particolare del fattoriale)
		printf("Il fattoriale di %d è 1 e il numero di zeri nel fattoriale e' 0.\n", numero);
	} else 
	{   	 
		int somma = 0;       					
        while(numero > 5){
   			numero = numero / 5;
   			somma = somma + numero;
		}
   		printf("Il numero di zeri presenti nel fattoriale e' %d.\n", somma);
	}
}
