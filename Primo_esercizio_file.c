#include <stdio.h>
#include <stdlib.h> // per NULL
#include <string.h>
#define FILE_OPEN_ERROR -1
#define N 20
#define MSG_LEN 100

typedef struct{
    char lettera[2];
    char codifica[4];
} corr;

int main(){
    FILE *corrispondenze;
    FILE *messaggi;
    corr coppie[N];
    char mes[MSG_LEN];
    char tripla[MSG_LEN];
    int i = 0,j;
    int n_codifiche;

    //apertura file corrispondenze
    corrispondenze = fopen("corrispondenze.txt", "r");
    if(corrispondenze == NULL){
        printf("Errore apertura file corrispondenze.\n");
        exit(FILE_OPEN_ERROR);
    }

    while(fscanf(corrispondenze,"%s %s",coppie[i].lettera,coppie[i].codifica) > 0){
        i++;
    }

    n_codifiche = i;
    for(j = 0; j < i;j++){
        printf("%s %s\n",coppie[j].lettera,coppie[j].codifica);
    }

    fclose(corrispondenze);//chiusura del file corrispondenze

    //apertura file messaggi
    messaggi = fopen("messaggi.txt", "r");
    if(messaggi == NULL){
        printf("Errore apertura file messaggi.\n");
        exit(FILE_OPEN_ERROR);
    }

    while(fscanf(messaggi,"%s", mes) > 0){
        j = 0;
        while(mes[j] != '\0'){
            tripla[0] = mes[j];
            tripla[1] = mes[j+1];
            tripla[2] = mes[j+2];
            tripla[0] = '\0';
            j = j+3;

            for(i = 0; i < n_codifiche; i++){
                if(strcmp(tripla,coppie[i].codifica) == 0){
                    printf("%s",coppie[i].lettera);
                    break;
                }
            }
        }
        printf("\n");

    }
    fclose(messaggi);
}