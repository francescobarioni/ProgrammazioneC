#include <stdio.h>

main() {
    int anno;

    printf("Inserisci l'anno desiderato: \n");
    scanf("%d", &anno);

    if(anno % 4 == 0) {
        if(anno % 100 != 0) {
            printf("L'anno inserito è bisestile.\n");
        } else {
            if(anno % 400 == 0) printf("L'anno è bisestile.\n");
            else printf("L'anno inseito non è bisestile.\n");
        }
    }
    printf("Fine.\n");
}