/*Calcolare il minimo comune multiplo di due numeri inseriti da tasiera.*/ 
#include <stdio.h>

main() {
    int a,b;

    printf("Inserisci il numero desiderato: \n");
    scanf("%d", &a);

    printf("Inserisci il numero desiderato: \n");
    scanf("%d", &b);

    int t;
    t = a;
    while(t % b != 0) {
        t += a;
    }

    printf("Il mcm è %d.\n",t);
}
