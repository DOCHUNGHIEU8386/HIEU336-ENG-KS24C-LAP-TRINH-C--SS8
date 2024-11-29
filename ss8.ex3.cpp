#include <stdio.h>

int main() {
    int n;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên
    printf("Nh?p vào s? nguyên: ");
    scanf("%d", &n);

    // Kh?i t?o m?ng 2 chi?u v?i s? hàng và s? c?t b?ng s? nguyên dã nh?p
    int matrix[n][n];

    // S? d?ng vòng l?p d? gán giá tr? cho m?ng
    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = value++;
        }
    }

    // In m?ng ra du?i d?ng ma tr?n vuông
    printf("Ma tr?n vuông %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

