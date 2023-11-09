#include<stdio.h>
int main(){
	int thousandDigit,hundredDigit,dozenDigit,unitDigit;
	int A;
	printf("nhap so co 4 chu so: ",A);
	scanf("%d",&A);
	thousandDigit = (A%10000)/1000;
	hundredDigit = (A%1000)/100;
	dozenDigit = (A%100)/10;
	unitDigit = A%10;
	int total = thousandDigit + hundredDigit + dozenDigit + unitDigit;
	int reverse = unitDigit*1000 + dozenDigit*100 + hundredDigit*10 + thousandDigit;
	printf("tong cac chu so: %d",total);
	printf("\ndao nguoc cac chu so: %d",reverse);
}
