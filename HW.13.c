#include <stdio.h>
#include <math.h>
int main (){
	int n;
	printf("nhap so N:");
	scanf("%d", &n);
	if(n < 2){
		printf("N khong phai la so nguyen to");
	}
	int i;
	for( i  = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			printf("N khong phai la so nguyen to"); 
		}
	}
	printf("N la so nguyen to");
}
