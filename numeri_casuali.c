#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int faccia, i, seme; 

    seme = time(NULL);
    srand(seme);

    for(i = 0; i < 10; i++){
        faccia = 1 + rand() % 6;
        printf("%d ",faccia); 
    }

    printf("\n");
    return 0;
}