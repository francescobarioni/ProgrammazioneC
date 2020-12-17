#include <stdio.h>
#define MAX_RIGHE 10

int simmetrica(int m[][MAX_RIGHE], int nrighe){
    int i,j;

    for(i = 0; i < nrighe; i++){
        for(j = i+1; j < nrighe; j++){
            if (m[i][j] != m[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int matrice[MAX_RIGHE][MAX_RIGHE];
    int nrighe;
    int i,j;

    printf("Quante righe ha la matrice?\n");
    scanf("%d", &nrighe);

    for(i = 0; i < nrighe; i++){
        for(j = 0; j < nrighe; j++){
            printf("Inserisci un valore:\n");
            scanf("%d", &matrice[i][j]);
        }
    }

    if(simmetrica(matrice,nrighe)){
        printf("Simmetrica.\n");
    } else {
        printf("Non simmetrica.\n");
    }

    return 0;
}