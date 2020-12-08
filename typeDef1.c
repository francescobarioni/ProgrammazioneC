#include <stdio.h>
#include <string.h>

typedef struct{
    int g,a;
    char mese[11];
} data;

typedef struct 
    {
        char nome[11];
        data nascita;
    } persona;

int main(){
    data oggi;
    persona p;

    printf("Inserisci la data di oggi:\n");
    scanf("%d %s %d",&oggi.g, oggi.mese, &oggi.a);

    printf("Inserisci il nome:\n");
    scanf("%s", p.nome);

    printf("Inserisci la data di nascità:\n");
    scanf("%d %s %d",&p.nascita.g, p.nascita.mese, &p.nascita.a); 

    int res = 0;
    if(oggi.g == p.nascita.g ){
        strncmp(oggi.mese,p.nascita.mese, 10);

        if(res == 0){
          printf("AUGURI %s!!!!\n", p.nome);  
        } else {
            printf("Non è il tuo compleanno.\n");
        }        
    }

    return 0;
}