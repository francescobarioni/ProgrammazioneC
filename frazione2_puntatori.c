#include <stdio.h>

typedef struct {
    int num,den;
} Frazione;



Frazione frazione(int n, int d){
    if(d != 0){
    int mcd = MCD(n,d);
    Frazione f;
    f.num = n / mcd;
    f.den = d / mcd;
    return f;
    } else {
        printf("Frazione non valida(denominatore nullo\n");
    }
}

Frazione somma(Frazione f1, Frazione f2){
    int n,d;
    Frazione fr;
    n = numeratore(f1)*denominatore(f2)+denominatore(f1)*numeratore(f2);
    d = denominatore(f1)* denominatore(f2);
    fr = frazione(n,d);
    return fr;
}

Frazione leggiFrazione(Frazione *pfr){
    int n,d;
    scanf("%d %d",&n, &d);
    frazione(n,d);
}

int numeratore(Frazione f){
    return f.num;
}

int denominatore(Frazione f){
    return f.den;
}

int MCD(int a, int b){
    while(a != b){
        if(a > b){
            a = a - b;
        } else{
            b = b - a;
        }
    }
    return a;
}

Frazione semplifica(Frazione f){
    int mcd = MCD(numeratore(f), denominatore(f));
    return frazione(numeratore(f)/mcd, denominatore(f)/mcd);
}

void stampaFrazione(Frazione f){
    Frazione fs;
    fs = semplifica(f);
    printf("%d/%d",numeratore(fs),denominatore(fs));
}

void stampaDecimale(Frazione f){
    printf("%f",(float)numeratore(f)/(float)denominatore(f));
}

float afloat(Frazione f){
    return (float)numeratore(f)/(float)denominatore(f);
}

int main(){
    Frazione fr;

/*    leggiFrazione(&fr);
    stampaFrazione(fr);
    printf("\n");
    stampaDecimale(fr);
    printf("\n");
    printf("%f\n", 3*afloat(fr));*/
    fr = somma(frazione(5,6),frazione(3,4));

    return 0;
}