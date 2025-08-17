#include <stdio.h>

int main(){
    int codigo1, codigo2, unidade1, unidade2;
    float preco1, preco2, soma;

    scanf("%d %d %f", &codigo1, &unidade1, &preco1);
    scanf("%d %d %f", &codigo2, &unidade2, &preco2);

    soma = (unidade1 * preco1) + (unidade2 * preco2);

    printf("VALOR A PAGAR: R$ %.2f\n", soma);


    return 0;
}
