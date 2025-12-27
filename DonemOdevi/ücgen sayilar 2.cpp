#include <stdio.h>

// n. üçgen sayıyı recursive olarak hesaplayan fonksiyon
int ucgenSayi(int n) {
    if (n == 1)
        return 1;
    return n + ucgenSayi(n - 1);
}

int main() {
    int N;

    printf("N degerini girin: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", ucgenSayi(i));
    }

    return 0;
}