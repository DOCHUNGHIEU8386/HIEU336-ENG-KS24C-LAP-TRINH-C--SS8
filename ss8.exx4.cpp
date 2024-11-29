#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?t m?ng hai chi?u b?t k?
    int arr[3][3] = {
        {3, 5, 7},
        {2, 6, 8},
        {1, 4, 9}
    };

    int rows = 3;  // S? hàng c?a m?ng
    int cols = 3;  // S? c?t c?a m?ng
    int max = arr[0][0];  // Gi? s? ph?n t? d?u tiên là l?n nh?t

    // Tìm ph?n t? l?n nh?t trong m?ng
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // In ra ph?n t? l?n nh?t trong m?ng
    printf("Ph?n t? l?n nh?t trong m?ng là %d\n", max);

    return 0;
}

