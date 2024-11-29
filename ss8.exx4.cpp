#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?t m?ng hai chi?u b?t k?
    int arr[3][3] = {
        {3, 5, 7},
        {2, 6, 8},
        {1, 4, 9}
    };

    int rows = 3;  // S? h�ng c?a m?ng
    int cols = 3;  // S? c?t c?a m?ng
    int max = arr[0][0];  // Gi? s? ph?n t? d?u ti�n l� l?n nh?t

    // T�m ph?n t? l?n nh?t trong m?ng
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // In ra ph?n t? l?n nh?t trong m?ng
    printf("Ph?n t? l?n nh?t trong m?ng l� %d\n", max);

    return 0;
}

