/*Scrivere un programma che legga una parola introdotta da
tastiera. La parola può contenere complessivamente al più 100
caratteri. Il programma deve svolgere le seguenti operazioni:
- Visualizzare la parola inserita e la sua lunghezza
- Costruire una nuova parola in cui tutte le vocali siano
sostituite con 3 caratteri: la vocale + carattere ’f’ + la
vocale
- Il programma deve memorizzare la nuova parola in una
opportuna variabile.
- Visualizzare la nuova parola e la sua lunghezza */

#include <stdio.h>
#define DIM 101

int main(){
    char parola[DIM];
    char parola2[DIM];
    int i = 0, lunghezza, j;
    int temp = 0;

    printf("Inserisci la parola desiderata (massimo 100 caratteri):\n");
    scanf("%s", parola);

    //compito 1
    printf("Compito 1:\n");
    printf("%s\n", parola);
    while(parola[i] != '\0'){
        i++;
    }
    printf("La lunghezza della parola inserita è %d.\n\n", i);

    //compito 2
    i = 0;
    j = 0;
   // temp = j + 1;
    while(parola[i] != '\0'){    
        if(parola[i] == 'a' || parola[i] == 'e' || parola[i] == 'i' || parola[i] == 'o' || parola[i] == 'u'){
            parola2[j] = parola[i];            
            parola2[j+1] = 'f';            
            parola2[j+2] = parola[i];
            j = j + 3;           
        } else {
            parola2[j] = parola[i];  
            j++;
        }
        
        i++;
    }

    //compito 4
    printf("%s\n", parola2);
    j = 0;
    while(parola2[j] != '\0'){
        j++;
    }
    printf("La lunghezza della nuova parola è %d.\n", j);

    return 0;
}