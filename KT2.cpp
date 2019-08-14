#include<stdio.h>
int main(){
	int n,c,d,a[100], b[100];
	printf("Nhap so phan tu trong mang \n");
	scanf("%d",&n);
	printf("Nhap phan tu trong mang \n");
	
	for ( c = 0; c < n; c++)
		scanf("%d", &a[c]);
	for (c = n - 1, d = 0; c >= 0; c--, d++)
		b[d] = a[c];
	for (c = 0; c < n; c++)
		a[c] = b[c];
	printf("mang dao nguoc la\n");
	for ( c = 0; c < n; c++)
	printf("%3d",a[c]);
	
	return 0;
}
