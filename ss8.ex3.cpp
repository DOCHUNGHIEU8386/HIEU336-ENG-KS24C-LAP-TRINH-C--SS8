#include <stdio.h>

int main() {
    int n;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nh?p v�o s? nguy�n: ");
    scanf("%d", &n);

    // Kh?i t?o m?ng 2 chi?u v?i s? h�ng v� s? c?t b?ng s? nguy�n d� nh?p
    int matrix[n][n];

    // S? d?ng v�ng l?p d? g�n gi� tr? cho m?ng
    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = value++;
        }
    }

    // In m?ng ra du?i d?ng ma tr?n vu�ng
    printf("Ma tr?n vu�ng %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

