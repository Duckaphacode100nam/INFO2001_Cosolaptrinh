#include <stdio.h>
int main () {
	int a,b;
	printf("Nhap 2 so nguyen a, b voi b khac 0 (b!=0, -10^9<=a,b<10^9):", a,b);
	scanf("%d %d", &a, &b);
	int c,d,e;
	c=a+b; d=a-b; e=a*b;
	float f=a/b;
	printf("Tong: %d\n", c);
	printf("Hieu: %d\n", d);
	printf("tich: %d\n", e);
	printf("thuong: %.2f\n", f);
}
