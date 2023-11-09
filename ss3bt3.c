#include<stdio.h>
int main(){
	float toan,anh,van;
	printf("nhap diem toan: ",toan);
	scanf("%f",&toan);
	printf("\nnhap diem anh: ",anh);
	scanf("%f",&anh);
	printf("\nnhap diem van: ",van);
	scanf("%f",&van);
	float totalscore = toan + anh + van;
	float average = totalscore/3;
	printf("tong diem:%.2f\n",totalscore);
	printf("trung binh diem:%.2f\n",average);
}
