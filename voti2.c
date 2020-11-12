#include <stdio.h>

int main(){
    int frequenze[31] = {};
    int i, voto;
    int somma, numero;
    float media;
    int n;

    for(i = 0; i < 31; i++){
        frequenze[i] = 0;
    }

    do{
        //input
        scanf("%d", &voto);

        //incremento della frequenza corrispondente
        if(voto != -1){
            frequenze[voto]++;            
        }
    }while(voto != -1);

    //minimo
    i = 0;
    while(i <= 30 && frequenze[i] == 0){
        i++;
    }
    printf("Voto minimo: %d\n", i);

    //massimo
    i = 30;
    while(i >= 30 && frequenze[i] == 0){
        i--;
    }
    printf("Voto massimo: %d\n", i);

    //media
    somma = 0;//accumulatore somma
    numero = 0;//accumulatore numero dei voti
    for(i = 0; i <= 30; i++){
        somma = somma + frequenze[i] * i;
        numero = numero + frequenze[i];
    }
    media = (float)somma / numero;
    printf("La media è %.2f\n", media);

    //voti più frequenti
    n = 0;
    for(i = 1; i <= 30; i++){
        if(frequenze[i] >= frequenze[n]){
            n = i;
            
        }
    }

    printf("Voti piu frequenti:");
    for(i = 0; i <= 30; i++){
        if(frequenze[i] == frequenze[n]){
            printf(" %d ",i);
        }
    }
    return 0;
}