/* Si scriva una funzione ricorsiva che calcola il massimo degli elementi 
dell'array a dall'indice 0 fino all'indice n. */

#include <stdio.h>

int max(int a[], int n){
    int m; 

    if(n == 0){
        return a[0]; 
    } else {
        m = max(a, n-1);
        if(m < a[n]){
            return a[n];
        } else {
            return m;
        }
    }
}

int main(){
    int a[4] = {3,5,2}, n = 2, m;
    m = max(a,n);
    printf("Il massimo è %d.\n", m);

    return 0;
}