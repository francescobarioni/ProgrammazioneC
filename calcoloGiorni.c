#include <stdio.h>

main() {
    int mese,anno;

    printf("Inserisci il numero del mese desiderato: \n");
    scanf("%d", &mese);

    printf("Inserisci l'anno desiderato: \n");
    scanf("%d", &anno);

    if (mese == 4 || mese == 6 || mese == 9 || mese == 11) {
        printf("Il mese inserito ha 30 giorni.\n");
    }

    if(mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12){
        printf("Il mese inserito ha 31 giorni.\n");
    }

    if (mese == 2){
        if(anno % 4 == 0) {
            if(anno % 100 != 0) {
                printf("L'anno inserito è bisestile e i giorni del mese inserito sono 29.\n");
            } else {
                if(anno % 400 == 0) printf("L'anno è bisestile e i giorni del mese inserito sono 29.\n");
                else printf("L'anno inseito non è bisestile e i giorni del mese inserito sono 28.\n");
            }
        }
    }

}