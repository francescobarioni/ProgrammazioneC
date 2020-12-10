#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 30

int main(){
    FILE *fp;
    char parola[DIM];

    //apertura file
    fp = fopen("prova.txt","w");
    if(fp == NULL){//controllo corretta apertura file
        printf("Impossibile aprire il file prova.txt.\n");
        exit(1);
    }

    do{
        printf("Inserisci la parola desiderata:\n");
        scanf("%s", parola);
        if(strcmp(parola,"FINE") != 0){
            fprintf(fp,"%s", parola);//scrittura su file
        }        
    }while(strcmp(parola,"FINE") != 0);
    fprintf(fp,"\n");

    //chiusura file
    fclose(fp);
    if(fclose(fp) != 0){//corretta chiusura file
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }
    return 0;
}