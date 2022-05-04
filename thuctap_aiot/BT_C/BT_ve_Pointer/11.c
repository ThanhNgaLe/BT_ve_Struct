/* Viet chuong trinh c de hoan doi cac phan tu bang cach su dung reference
*/

#include <stdio.h>

void swapNumbers(int *x, int *y, int *z)
{
	int temp;
	temp = *y;
	*y = *x;
	*x = *z;
	*z = temp;
}
int main(){
	int e1, e2, e3;
	printf("\n\n con tro: hoan doi cac phan tu");
	printf("\n--------------------------------------");
	
	printf("\nNhap vao gia tri bien e1: ");
	scanf("%d", &e1);
	printf("\nNhap vao gia tri bien e2: ");
	scanf("%d", &e2);
	printf("\nNhap vao gia tri bien e3: ");
	scanf("%d", &e3);
	
	printf("\nGia tri truoc khi hoan doi: ");
	printf("\n e1 = %d \n e2 = %d \n e3 = %d ", e1, e2, e3);
	
	swapNumbers(&e1, &e2, &e3);
	printf("\n Gia tri sau khi hoan doi: ");
	printf("\n e1 = %d \n e2 = %d \n e3 = %d ", e1, e2, e3);
	
	
	return 0;
}

