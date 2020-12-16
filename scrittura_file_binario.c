#include <stdio.h>

int main(){
    FILE *f;
    short int x = 32134;
    float A[5] = {1.0, 1.5, 2.0, 3.0,4.0};
    f = fopen("binario.bin", "wb");
    fwrite(A,4,5,f);
    /* fwrite( indirizzo della variabile, 
                grandezza in byte del tipo di variabile,
                numero di elementi,
                nome del puntatore a file); */
    fclose(f);
    return 0;
}