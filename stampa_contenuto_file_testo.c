#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char nomefile[50];
    char c;

    printf("Quale file apro?\n");
    scanf("%s", nomefile);

    fp = fopen(nomefile, "r");
    if(fp == NULL){
        printf("Il file non è stato aperto correttamente.\n");
        exit(1);
    }

    //stampa a video del contenuto del file
    while(!feof(fp)){
        fscanf(fp, "%c", &c);
        printf("%c", c);
    }

    fclose(fp);
    if(fclose(fp) != 0){
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }
    return 0;
}