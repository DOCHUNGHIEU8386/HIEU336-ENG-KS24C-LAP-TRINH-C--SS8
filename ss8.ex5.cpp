#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?t ma tr?n (m?ng hai chi?u) b?t k?
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4;  // S? h�ng c?a ma tr?n
    int cols = 4;  // S? c?t c?a ma tr?n
    int sum = 0;

    // T�nh t?ng c�c ph?n t? tr�n du?ng bi�n c?a ma tr?n
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // C�c ph?n t? tr�n du?ng bi�n
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }

    // In k?t qu? ra m�n h�nh
    printf("T?ng c�c ph?n t? tr�n du?ng bi�n c?a ma tr?n l�: %d\n", sum);

    return 0;
}

