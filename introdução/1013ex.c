#include <stdio.h>

int main(){
    int A, B, C; 
    scanf("%d %d %d", &A, &B, &C);

    int maior_AB = (A + B + abs(A - B)) / 2;
    int maior_ABC = (maior_AB + C + abs(maior_AB - C)) / 2;

    printf("%d eh o maior\n", maior_ABC);

    return 0;
}