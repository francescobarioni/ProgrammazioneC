#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char cognome[31];
    char nome[31];
    char sesso[2];
    int anno_nascita;
} Persona;

int main(){
    Persona persone[100];
    FILE *fp;
    int dl;

    fp = fopen("people.txt", "r");
    if(fp == NULL){
        printf("Il file people.txt è stato aperto in maniera errata.\n");
        exit(1);
    }
    dl = 0;
    while(fscanf(fp,"%s%s%s%d", persone[dl].cognome, persone[dl].nome,persone[dl].sesso,&persone[dl].anno_nascita) == 4){
        dl++;
    }

    if(fclose(fp) != 0){
        printf("Errore chiusura file.\n");
        exit(2);
    }
    return 0;
}