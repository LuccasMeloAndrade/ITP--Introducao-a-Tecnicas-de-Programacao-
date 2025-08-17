#include <stdio.h>

int main(){
    char nome[50];
    double salario_fixo, comissao, vendas, salario_final;

    scanf("%49s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &vendas);

    comissao = vendas * 0.15;
    salario_final  = salario_fixo + comissao;

    printf("TOTAL = R$ %.2f\n", salario_final);

    return 0;
}
