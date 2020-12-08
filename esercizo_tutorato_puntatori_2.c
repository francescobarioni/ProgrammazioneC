#include <stdio.h>

int lunghezzaStringa(char stringa[100]){
    int i,lung = 0;
    i = 0;
    while (stringa[i] != '\0')
    {
        lung++;
        i++;
    }
    return lung;
}

int rimuoviDuplicati(char a1[100], char a2[100]){
    int i,j,k = 0, eliminati = 0;
    char nuovaFrase[100];
    int lunghezza1 = 0, lunghezza2 = 0;

     lunghezza1 = lunghezzaStringa(a1);
     lunghezza2 = lunghezzaStringa(a2);
    

    for(i = 0; i < lunghezza1; i++){
        for(j = 0; j < lunghezza2; j++){
            if(a1[i] == a2[j]){
                eliminati++;
                a1[i] = ' ';
                break;
            } 
        }
        if(a1[i] != ' '){
            nuovaFrase[k++] = a1[i];
        }
    }
    nuovaFrase[k] = '\0';
    printf("La nuova stringa è %s.\n", nuovaFrase);

    return eliminati;
}

int main(){
    char frase1[100];
    char frase2[100];
    int delete = 0;
    int i;

    printf("Inserisci la prima frase:\n");
    scanf("%s", frase1);

    printf("Inserisci la seconda frase:\n");
    scanf("%s", frase2);
    
    delete = rimuoviDuplicati(frase1,frase2);

    printf("I caratteri eliminati sono: %d.\n",delete);

    return 0;
}