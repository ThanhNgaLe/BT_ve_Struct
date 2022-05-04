/* viet chuong trinh trinh bay cach xu ly cac con tro trong chuong trinh */

#include <stdio.h>

int main(){
	int* ab;
	int m;
	m = 29;
	
	printf("\nDia chi cua m: %p", &m);
	printf("\nGia tri cua m: %d", m);
	
	ab = &m;
	printf("\n\nBay gio ab duoc gan voi dia chi cua m");
	printf("\nDia chi cua con tro ab: %p", ab);
	printf("\nNoi dung cua con tro ab: %d", *ab);
	
	m=34;
	printf("\n\nBay gio gia tri m gan bang 34");
	printf("\nDia chi cua con tro ab: %p", ab);
	printf("\nNoi dung cua con tro ab: %d", *ab);
	
	*ab = 7;
	printf("\n\nBay gio gia tri con tro ab duoc gan bang 7");
	printf("\nDia chi cua m: %p", &m);
	printf("\nGia tri m: %d", m);
	
	
	
}
