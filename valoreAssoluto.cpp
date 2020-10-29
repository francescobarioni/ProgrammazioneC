//Trovare il valore assoluto di un numero dato in input
#include <stdio.h>

main() {
	int n;
	
	printf("Inserisci il numero desiderato: \n");
	scanf("%d", &n);
	
	printf("Il valore assoluto e' %d\n", n >= 0 ? n : -n);
}
