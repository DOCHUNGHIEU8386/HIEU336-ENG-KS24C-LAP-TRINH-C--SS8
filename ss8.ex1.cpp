#include <stdio.h>

int main() {
	//Khai bao va gan gia tri cho mot mang bat ky
	int array[] = {1,2,3,4,5};
	int n = sizeof(array) / sizeof(array[0]);//Tinh gia tri phan tu trong mang
	
	// Su dung vong lap de in ra cac phan tu trong mang tu cuoi ve dau
	for (int i = n - 1; i >= 0; i--) {
	
	 printf("%d ", array[i]);
}
	return 0;
}
