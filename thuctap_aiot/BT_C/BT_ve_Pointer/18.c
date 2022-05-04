/*
Cach hien thi con tro cau truc
*/
#include <stdio.h>
#include<string.h>
struct thongtin
{
	char *hoTen;
	char diaChi[50];
	int tuoi;
} ;

int main()
{
	struct thongtin nga;
	nga.hoTen = "LeThanhNga";
	nga.diaChi[50] = "HaiDuong";
	nga.tuoi = 22;
	struct thongtin *ten = &nga;
	
	printf("ho ten: %s", ten->hoTen);
 	printf("\n\n con tro: Cach hien thi con tro cau truc :\n"); 
	printf("--------------------------------------------------------\n");
	printf(" tuoi: %d \n", (*ten).tuoi);
	return 0;
}
