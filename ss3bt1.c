#include<stdio.h>
int main(){
	float Pi, r;
	Pi = 3,14;
	printf("nhap ban kinh: ");
	scanf("%f",&r);
	float s = Pi*r*r;
	float c = 2*Pi*r;
	printf("dien tich la: %.2f\n",s);
	printf("chu vi la: %.2f\n",c);
}
