/* Scrivere un programma che richieda in ingresso i voti ottenuti agli esami da uno
studente (terminando quando viene inserito il voto -1) e scriva il voto minimo, il voto
massimo, la media e i voti più frequenti. Si tenga presente che possono essere
registrati anche voti insufficienti. Si ignorino eventuali lodi.
Per testare il programma,
- creare un file di testo di nome voti.in contenente 50 interi casuali compresi fra 0
e 30, seguiti dal numero -1, con un opportuno programma;
- eseguire il programma redirigendo l’input su voti.in. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    for(i = 0; i < 49; i++){
        printf("%d\n", 18 + rand() % 13);// numero casuale fra 18 e 30
    }
    printf("-1\n");
    return 0;
}