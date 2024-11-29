#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?t m?ng b?t k?
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, found = 0;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t ph?n t?
    printf("Nh?p v�o ph?n t? c?n ki?m tra: ");
    scanf("%d", &element);

    // Ki?m tra xem ph?n t? d� c� t?n t?i trong m?ng kh�ng
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("V? tr� ph?n t? trong m?ng l� %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Ph?n t? kh�ng t?n t?i trong m?ng.\n");
    }

    return 0;
}

