#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *allocaStringa(int n){
    char *s;
    s = (char*)malloc(n);
    if(s == NULL){
        printf("Impossibile allocare la memoria.\n");
        exit(1);
    }
    return s;
}

void libera(char *s){
    free(s);
}

int main(){
    char *pc = alloca(100);
    strcpy(pc,"Ferrara");
    printf("%s\n", pc);
    libera(pc);

    return 0;
}