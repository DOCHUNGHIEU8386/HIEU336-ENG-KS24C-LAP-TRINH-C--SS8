#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?t m?ng b?t k?
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, found = 0;

    // Yêu c?u ngu?i dùng nh?p vào m?t ph?n t?
    printf("Nh?p vào ph?n t? c?n ki?m tra: ");
    scanf("%d", &element);

    // Ki?m tra xem ph?n t? dó có t?n t?i trong m?ng không
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("V? trí ph?n t? trong m?ng là %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Ph?n t? không t?n t?i trong m?ng.\n");
    }

    return 0;
}

