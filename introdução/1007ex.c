#include <stdio.h>

int main(){
    int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    int conta = (A * B - C * D);
    printf("DIFERENCA = %d\n", conta);
    return 0;
}
