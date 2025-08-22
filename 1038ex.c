#include <stdio.h>

int main() {
    int x, y;
    float cod1, cod2, cod3, cod4, cod5;

    scanf("%d %d", &x, &y);

    cod1 = 4.0;
    cod2 = 4.5;
    cod3 = 5.0;
    cod4 = 2.0;
    cod5 = 1.5;

    if (x == 1) {
        printf("Total: R$ %.2f\n", cod1 * y);
    } else if (x == 2) {
        printf("Total: R$ %.2f\n", cod2 * y);
    } else if (x == 3) {
        printf("Total: R$ %.2f\n", cod3 * y);
    } else if (x == 4) {
        printf("Total: R$ %.2f\n", cod4 * y);
    } else if (x == 5) {
        printf("Total: R$ %.2f\n", cod5 * y);
    }

    return 0;
}
