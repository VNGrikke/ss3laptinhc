#include<stdio.h>
int main(){
	int birthYear, currentYear;
	char chan,le;
	printf("nhap vao nam sinh:",birthYear);
	scanf("%d",&birthYear);
	printf("nhap vao nam hien tai:",currentYear);
	scanf("%d",&currentYear);
	int age = currentYear - birthYear;
	printf("tuoi:%d\n",age);
	char chanle = (age%2==0)? printf("chan"):printf("le");
}
