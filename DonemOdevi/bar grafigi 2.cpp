#include <stdio.h>

int main() {
    // Örnek verilen 12 aylık ciro verisi
    int cirolar[12] = {2, 8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6};

    printf("Yatay Bar Grafigi:\n\n");

    // Yatay bar grafiği
    for (int i = 0; i < 12; i++) {
        printf("%2d.: ", i + 1);
        for (int j = 0; j < cirolar[i]; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}