/*Scrivere un programma che sostituisca tutte le occorrenze del
carattere a con u in una stringa (NB. La stringa non deve
contenere spazi). Leggere da tastiera la stringa (max 20 caratteri).*/

#include <stdio.h>

int main(){
    char parola[21];
    int i;
    
    printf("Inserisci la parola desiderata:\n");
    scanf("%s", parola);

    i = 0;
    while(parola[i] != '\0'){
        if(parola[i] == 'a'){
            parola[i] = 'u';
        }
        i++;
    }

    printf("La parola modificata è %s.\n", parola);

    return 0;
}