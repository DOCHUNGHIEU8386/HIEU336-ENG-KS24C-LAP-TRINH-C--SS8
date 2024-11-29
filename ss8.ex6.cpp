#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?t ma tr?n vu�ng (m?ng hai chi?u) b?t k?
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4;  // S? h�ng v� c?t c?a ma tr?n vu�ng
    int sum = 0;

    printf("C�c ph?n t? tr�n du?ng ch�o ch�nh c?a ma tr?n:\n");
    // In c�c ph?n t? tr�n du?ng ch�o ch�nh v� t�nh t?ng
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\n");

    // In t?ng c�c ph?n t? tr�n du?ng ch�o ch�nh
    printf("T?ng c�c ph?n t? tr�n du?ng ch�o ch�nh c?a ma tr?n l�: %d\n", sum);

    return 0;
}

