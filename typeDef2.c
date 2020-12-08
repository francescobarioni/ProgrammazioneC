#include <stdio.h>

int main(){
    struct orario
    {
        int ore, minuti;
    } orario1, orario2, differenza;

    /*orario1.ore;
    orario1.minuti;

    orario2.ore;
    orario2.minuti; */

    printf("Inserisci il primo orario:\n");
    scanf("%d %d",&orario1.ore, &orario1.minuti);

    printf("Inserisci il secondo orario:\n");
    scanf("%d %d",&orario2.ore, &orario2.minuti);   

    /*printf("%d %d\n", orario1.ore, orario1.minuti);
    printf("%d %d\n", orario2.ore, orario2.minuti); */

    differenza.minuti = orario2.minuti - orario1.minuti;
    if(differenza.minuti < 0){
        differenza.minuti = differenza.minuti + 60;
        orario2.ore--;
    }
    differenza.ore = orario2.ore - orario1.minuti;
    printf("differenza: %d.%d\n",differenza.ore, differenza.minuti);
}