#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?t ma tr?n vuông (m?ng hai chi?u) b?t k?
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4;  // S? hàng và c?t c?a ma tr?n vuông
    int sum = 0;

    printf("Các ph?n t? trên du?ng chéo chính c?a ma tr?n:\n");
    // In các ph?n t? trên du?ng chéo chính và tính t?ng
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\n");

    // In t?ng các ph?n t? trên du?ng chéo chính
    printf("T?ng các ph?n t? trên du?ng chéo chính c?a ma tr?n là: %d\n", sum);

    return 0;
}

