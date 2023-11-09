#include<stdio.h>
int main(){
	int thousandDigit,hundredDigit,dozenDigit,unitDigit;
	int A;
	printf("nhap so co 4 chu so: ",A);
	scanf("%d",&A);
	printf("nhap so hang nghin: ",thousandDigit);
	scanf("%d",&thousandDigit);
	printf("nhap so hang tram: ",hundredDigit);
	scanf("%d",&hundredDigit);
	printf("nhap so hang chuc: ",dozenDigit);
	scanf("%d",&dozenDigit);
	printf("nhap so hang don vi: ",unitDigit);
	scanf("%d",&unitDigit);
	int total = thousandDigit + hundredDigit + dozenDigit + unitDigit;
	int reverse = unitDigit*1000 + dozenDigit*100 + hundredDigit*10 + thousandDigit;
	printf("tong cac chu so: %d",total);
	printf("\ndao nguoc cac chu so: %d",reverse);
}
