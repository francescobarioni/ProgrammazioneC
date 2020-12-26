#include <stdio.h>

// ricerca binaria confrontando due elementi dell'array partendo dal punto medio dell'array
ricerca_binaria(int a[], int first, int last, int x){
    int medio;
    medio = (first + last) / 2;
    if(a[medio] == x){
        return medio;
    } else {
        if(a[medio] > x){
            return ricerca_binaria(a,first,medio - 1,x);
        } else {
            return ricerca_binaria(a,medio + 1, last,x);
        }
    }
}

int  lettura(){

}

int main(){
    int n,p;
    int a[100];
    n = lettura();// scegliere dall'utente un metodo per leggere n (esempio --> tastiera)
    p = ricerca_binaria(a,0,n - 1,15);

    if(p < 0){
        printf("Elemento non presente.\n");
    } else {
        printf("Trovato in posizione %d.\n",p);
    }

    return 0;
}