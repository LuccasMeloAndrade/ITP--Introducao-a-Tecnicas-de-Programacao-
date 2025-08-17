#include <stdio.h>

int main(){
    double A, B, C;
    double A_triangulo, A_circulo, A_trapezio, A_quadrado, A_retangulo;

    scanf("%lf %lf %lf", &A, &B, &C);
    A_triangulo = (A * C) / 2;
    A_circulo = 3.14159 * C * C;
    A_trapezio = ((A + B) * C) / 2.0;
    A_quadrado = B * B;
    A_retangulo = A * B;

    printf("TRIANGULO: %.3lf\n", A_triangulo);
    printf("CIRCULO: %.3lf\n", A_circulo);
    printf("TRAPEZIO: %.3lf\n", A_trapezio);
    printf("QUADRADO: %.3lf\n", A_quadrado);
    printf("RETANGULO: %.3lf\n", A_retangulo);

    return 0;
}
