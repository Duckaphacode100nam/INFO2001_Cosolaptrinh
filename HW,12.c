#include <stdio.h>
int main (){
	int n;
	int tong = 0;
	printf("Nhap so N:");
	scanf("%d", &n);
	int i;
	for (i = 1; i<=n; i += 2){
		tong += i;
	}
	printf("Tong cua N so le dau tien la: %d", tong);
}
