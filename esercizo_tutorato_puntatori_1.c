#include <stdio.h>

int occorrenze(int vett[], int n, int*poccorrenze){
    int i,j,cont,num;
    for(i = 0; i < n; i++){
        cont = 0;
        for(j = 0; j < n; j++){
            if(vett[i] == vett[j]){
                cont++;
            }
        }

        if(cont > *poccorrenze){
            *poccorrenze = cont;
            num = vett[i];
        }
    }
    return num;
}

int main(){
    int n,k,i,occ = 0,num;

    do{
        printf("Inserisci il numero n:\n");
        scanf("%d", &n);

        if(n < 1 || n > 100){
            printf("Reinserire il numero n.\n");
        }
    }while(n < 1 || n > 100);

    do{
        printf("Inserisci il numero k:\n");
        scanf("%d", &k);

        if(k < 1 || k > n){
            printf("Reinserire il numero n.\n");
        }
    }while(k < 1 || k > n);   

    int vett[n];

    for(i = 0; i < n; i++){
        printf("Inserisci il numero:\n");
        scanf("%d", &vett[i]);
    }

    num = occorrenze(vett,n,&occ);
    printf("Il numero ripetuto più volte è %d ed è ripetuto  %d volte.\n",num,occ);

    return 0;
}