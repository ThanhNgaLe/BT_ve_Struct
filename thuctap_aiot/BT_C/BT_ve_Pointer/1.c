/* Viet chuong trinh c trình bay phan khai bao co ban cua con tro
*/

#include <stdio.h>

int main()
{
	int m = 10, n, o;
	int *z;
	z = &m;
	
	printf("\n\n Pointer : Show\n");
	printf("m = 10, n và o là hai bien so nguyen và *z là mot so nguyen");
	printf("\nz luu tru dia chi cua m = %x", z);
	printf("\nz luu tru gia tri cua m = %d", *z);
	printf("\n&m la dia chi cua m = %x", &m);
	printf("\n&n luu tru dia chi cua n = %x", &n);
	printf("\n&o luu tru dia chi cua o = %x", &o);
	printf("\n&z luu tru dia chi cua z = %x", &z);
	
	return 0;
}
