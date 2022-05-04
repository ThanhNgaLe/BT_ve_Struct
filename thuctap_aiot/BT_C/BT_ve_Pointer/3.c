/* Viet chuong trinh chung minh viec su dung &(dia chi cua) và *(Gia tri tai dia chi)
*/
// The hien viec su dung toan tu & va *
#include <stdio.h>

int main(){
	int m = 300;
	float fx = 300.60;
	char cht = 'z';
	
	printf("\n\n Con tro: The hien viec su dung toan tu & va *");
	printf("\n------------------------------------------------");
	
	int *ptr1;
	float *ptr2;
	char *ptr3;
	
	ptr1 = &m;
	ptr2 = &fx;
	ptr3 = &cht;
	
	printf("\n m = %d", m);
	printf("\n fx = %f", fx);
	printf("\n cht = %c", cht);
	
	printf("\n\n Su dung toan tu &");
	printf("\n------------------------------------------------");
	
	printf("\n Dia chi cua m = %x", &m);
	printf("\n Dia chi cua fx = %x", &fx);
	printf("\n Dia chi cua cht = %x", &cht);
	
	printf("\n\n Su dung toan tu *");
	printf("\n------------------------------------------------");
	
	printf("\n Gia tri cua m = %d", *(&m));
	printf("\n Gia tri cua fx = %f", *(&fx));
	printf("\n Gia tri cua cht = %c", *(&cht));
	
	printf("\n\n Chi su dung bien con tro");
	printf("\n------------------------------------------------");
	
	printf("\n Dia chi cua m = %x", ptr1);
	printf("\n Dia chi cua fx = %x", ptr2);
	printf("\n Dia chi cua cht = %x", ptr3);
	
	printf("\n\n Chi su dung toan tu con tro");
	printf("\n------------------------------------------------");
	
	printf("\n Gia tri cua m = %d", *ptr1);
	printf("\n Gia tri cua fx = %f", *ptr2);
	printf("\n Gia tri cua cht = %c", *ptr3);
	
}

