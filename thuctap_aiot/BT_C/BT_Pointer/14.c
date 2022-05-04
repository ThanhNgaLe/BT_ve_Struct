/*
Viet chuong trinh sap xep mang bang con tro
*/

#include <stdio.h>
void main(){
	int b[100];
	int *a = &b ;
	int i, j, tmp, n;

	printf("\nCon tro: Sap xep mang su dung con tro");
	printf("\n-----------------------------------------");
	
	printf("\nNhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	
	printf("\nNhap vao %d phan tu cua mang: ", n);
	for(i = 0; i<n; i++)
	{
		printf("\nPhan tu thu %d : ",i+1);
		scanf("%d", a+i);
	}
	for(i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if(*(a+i) > *(a+j))
			{
				tmp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = tmp; 		
			}
		}
	}
	printf("\nMang sau khi sap xep:");
	for ( i =0; i<n; i++)
	{
		printf("\nPhan tu thu %d : %d", i+1, *(a+i) );
	}
	

}
