#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&number);
	int square = pow(number, 2);
	printf("binh phuong so nguyen: %d\n", square);
}
