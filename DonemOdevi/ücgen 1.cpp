#include <stdio.h>

int main() {
    int n;
    int sayi = 1;

    printf("Bir tam sayi girin: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" %d ", sayi);
            sayi++;
        }
        printf("\n");
    }

    return 0;
}