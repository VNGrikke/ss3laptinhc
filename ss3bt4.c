#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("nhap number1: ",number1);
	scanf("%d",&number1);
	printf("\nnhap number2: ",number2);
	scanf("%d",&number2);
	printf("\nnhap number3: ",number3);
	scanf("%d",&number3);
	int max = ( number1 > number2 && number1 > number3 )?number1: ((number2 > number3)?number2:number3);
	printf("max:%d",max);
	int min = ( number1 < number2 && number1 < number3 )?number1: ((number2 < number3)?number2:number3);
	printf("\nmin:%d",min);
}
