#include<stdio.h>
int sum (int a, int b){
	return a+b;
}
int subtraction (int a, int b){
	return a-b;
}
int multiplication (int a, int b ){
	return a*b;
}
int division (int a, int b ){
	return a/b;
}

int main(){
	int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("tong cua hai so %d\n", sum (a,b));
	printf("hieu cua hai so %d\n", subtraction (a,b));
	printf("phep nhan cua hai so %d\n", multiplication (a,b));
	printf("thuong cua hai so %d\n", division (a,b));
}
