#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?t ma tr?n (m?ng hai chi?u) b?t k?
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4;  // S? hàng c?a ma tr?n
    int cols = 4;  // S? c?t c?a ma tr?n
    int sum = 0;

    // Tính t?ng các ph?n t? trên du?ng biên c?a ma tr?n
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Các ph?n t? trên du?ng biên
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }

    // In k?t qu? ra màn hình
    printf("T?ng các ph?n t? trên du?ng biên c?a ma tr?n là: %d\n", sum);

    return 0;
}

