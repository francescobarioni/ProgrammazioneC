#include <stdio.h>

int main(){
    FILE *f;
    float A[10];
    int i,n;

    f = fopen("binario.bin", "rb");
    n = fread(A,sizeof(float),10,f);
    /* fread( indirizzo della variabile, 
                grandezza in byte del tipo di variabile,
                numero di elementi,
                nome del puntatore a file); */
    fclose(f);

    for(i = 0; i < n; i++){
        printf("%f\n", A[i]);
    }
    return 0;
}