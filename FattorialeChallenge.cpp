/*Leggere da tastiera un intero n a piacere e calcolare il numero di zeri che si trovano alla fine di n!
Come gestire valori enormi come 1000?!*/

#include <stdio.h>
#include <math.h>

main() {
	int numero, fattoriale = 1, n, f;
	int i,cifre = 0;
	int cifra;
	int cont = 0;
	int j;
	
	printf("Inserisci il numero desiderato: \n");
	scanf("%d", &numero);
	
	n = numero;
	
	if(numero == 0){// controllo se il numero inserito è 0 (caso particolare del fattoriale)
		printf("Il fattoriale di %d è 1 e il numero di zeri nel fattoriale e' 0.\n", numero);
	} else 
	{
		//calcolo fattoriale
		for(i = numero; i > 1; i--){
			fattoriale = fattoriale * i;
		}
		printf("Il fattoriale del numero inserito e' %d.\n", fattoriale);
		f = fattoriale;
		
		//calcolo del numero di cifre
		while(fattoriale > 0){
        	fattoriale = fattoriale / 10;
        	cifre++;
    	}
    	printf("Il fattoriale ha %d cifre.\n", cifre);
    	
    	fattoriale = f;
        	        
        	
        	for(j = 0; j < cifre; j++){
        		cifra = fattoriale % 10;        		
				 
            		if(0 == cifra){
            			cont++;//conta il numero di 0
					} else {
						break;
					}  
					fattoriale = fattoriale / 10;         
        	}
   		printf("Il numero di zeri presenti nel fattoriale e' %d.\n", cont);

	}
}
