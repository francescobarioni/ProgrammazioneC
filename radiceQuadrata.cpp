/* Scrivere un programma che calcoli un'approssimazione della radice quadrata di un numero reale "a"
con il cosidetto metodo babilonese: una successione x di approssimazioni in cui il primo elemento x1
 è 1.0 e il successore è xk+1 è la media aritmetica fra xk e a/xk. Testarlo chiamandola con parametri
 attuali significativi */
 
 #include <stdio.h>
 #include <math.h>
 
 main(){
 	float a,x;
 	printf("Inserisci un numero reale:\n");
 	scanf("%f", &a);
 	
 	//approssimazione con x la radice quadrata di a
 	x = 1.0;
 	while(fabsf(x * x - a) >= 1e-5){//x non è abbastanza vicino alla radice quadrata di a
 		x =(x + (a/x)) / 2.0; //x è la media aritmetica di x e a/x
	}
	printf("%f\n", x);
 }
