/*Scrivere un programma che legga da tastiera una sequenza di N
(< 100) numeri interi. Il valore N è inserito dall’utente. Se
N >= 100 terminare il programma. I numeri sono memorizzati in
un vettore. Terminato l’inserimento della sequenza di numeri, il
programma deve visualizzare una riga di asterischi per ogni
numero inserito. Il numero di asterischi nella riga è pari al valore
del numero inserito. */

#include <stdio.h>

int main(){
    int n,i;
    int j;

    printf("Inserisci il valore n:\n");
    scanf("%d", &n);    
    int vett[n];

    if(n >= 100){
        printf("Il programma è terminato.\n");
    }

	//riempimento vettore
    for(i = 0; i < n; i++){
        printf("Inserisci il valore desiderato:\n");
        scanf("%d", &vett[i]);
    }
    
    int max = 0;
    int work = 0;
    for(i = 0; i < n; i++){
    	if(vett[i] > max){
    		max = vett[i];
		}
	}
	
	work = max;

	printf("\n\nStampa:\n");
   	for(i = 1; i <= max; i++){
	   printf("\n"); 
	   printf("%d|", work);	
        for(j = 0; j < n; j++){       	
			if(vett[j] == work){
				printf("^  ");
			} else {
				if(vett[j] > work){
					printf("|  ");
				} else {
					printf("   ");					
				}
			}
        }
        work--;
    } 
	
	printf("\n");
	printf("  ");
	for(i = 0; i < n; i++){
		printf("___");
	}
	printf("\n");
	printf("  ");
	for(i = 0; i < n; i++){
		printf("%d  ", vett[i]);
	}
}
