/*Stampare a video tutte le terne pitagoriche in cui l'ipotenusa è minore o uguale a un numero richiesto dall'utente.
Stampare anche il numero di terne testate.*/

#include <stdio.h>

main() {
    int n;
    int a,b,c;
    int cont = 0;

    printf("Inserisci l'ipotenusa massima: \n");
    scanf("%d", &n);

    for(c = 1; c <= n; c++){
        for(b = 1; b < c; b++){
            for(a = 1; a < b; a++){
                cont++;
                if(a * a + b * b == c * c){
                    printf("%d %d %d\n", a,b,c);
                }
            }
        }
    }
    printf("Terne testate: %d.\n",cont);
}