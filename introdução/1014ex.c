#include <stdio.h>

int main(){
    int Km;
    double litros, KmL;
    scanf("%d",&Km);
    scanf("%lf",&litros);

    KmL = Km / litros;

    printf("%.3lf km/l", KmL);

    return 0;
}
