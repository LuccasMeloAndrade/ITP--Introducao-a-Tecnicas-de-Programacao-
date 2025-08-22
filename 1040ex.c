#include <stdio.h>

int main() {
    float media, media_final, n1, n2, n3, n4, n5;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10.0;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media >= 5.0 && media < 7.0) {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);

        media_final = (media + n5) / 2.0;

        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media_final);
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
