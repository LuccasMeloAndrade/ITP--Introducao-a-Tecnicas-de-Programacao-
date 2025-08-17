#include <stdio.h>

int main(){
    int numero, horas;
    float recebe;

    scanf("%d\n%d", &numero, &horas);
    scanf("%f", &recebe);

    float salario = horas * recebe;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);


    return 0;
}