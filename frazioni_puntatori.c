#include <stdio.h>

typedef struct {
    int num,den;
} Frazione;

Frazione frazione(int n, int d, Frazione* pf){
    (*pf).num = n;//deferenziazione e selezione campo
    //pf->num = n;equivalente alla riga sopra
    (*pf).den = d;
    //pf->den = d;
}

Frazione leggiFrazione(Frazione *pfr){
    int n,d;
    scanf("%d %d",&n, &d);
    frazione(n,d,pfr);
}

int numeratore(Frazione f){
    return f.num;
}

int denominatore(Frazione f){
    return f.den;
}

void stampaFrazione(Frazione f){
    printf("%d/%d\n",f.num,f.den);
}

void stampaDecimale(Frazione f){
    printf("%f",(float)numeratore(f)/(float)denominatore(f));
}

float afloat(Frazione f){
    return (float)numeratore(f)/(float)denominatore(f);
}

int main(){
    Frazione fr;

    leggiFrazione(&fr);
    stampaFrazione(fr);
    printf("\n");
    stampaDecimale(fr);
    printf("\n");
    printf("%f\n", 3*afloat(fr));
    return 0;
}