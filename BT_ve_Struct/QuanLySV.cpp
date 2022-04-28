//Quan ly sv
/*
	+ Nhap danh sách sinh viên tu bàn phím( 10 sinh viên)
	+ Hien thi danh sách sinh viên dã nhap.
	+ Sap xep danh sách sinh viên theo diem tang dan.
	+ Hien thi danh sách sau khi sap xep.
	+ In ra danh sách các sinh viên có diem thi dai hoc lon hon 24
	+ Tìm kiem và in ra danh sách sinh viên có tên là "Nga" 
	Tìm kiem và in danh sách sinh viên có ngày sinh là 30/04
*/


#include <stdio.h>
#include <string.h>
#include <time.h>

struct NGAYTHANG{
	int ngay;
	int thang;
	int nam;
};

struct SinhVien{
	int MSV;
	char HoTen[100];
	NGAYTHANG ngaySinh;
	char gioiTinh[10];
	char noiSinh[100];
	float Diem;
};

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if (x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

void nhapSV(SinhVien &sv){
	printf("\nMSV: "); scanf("%d", &sv.MSV); getchar();
	printf("\nHo ten: "); fgets(sv.HoTen, sizeof(sv.HoTen), stdin); xoaXuongDong(sv.HoTen);
	printf("\nNgay sinh: "); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam); getchar();
	printf("\nGioi tinh: "); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin); xoaXuongDong(sv.gioiTinh);
	printf("\nNoi sinh: "); fgets(sv.noiSinh, sizeof(sv.noiSinh), stdin); xoaXuongDong(sv.noiSinh);
	printf("\nDiem: "); scanf("%f", &sv.Diem );
}

void xuatsv(SinhVien sv){
	printf("\n%10d \t %15s \t %2d/%d/%d \t %10s \t %10s \t %6.2f", sv.MSV, sv.HoTen, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.gioiTinh, sv.noiSinh, sv.Diem);
}

void nhapDanhSachSV(SinhVien ds[], int &n){
	do{
		printf("\nNhap vao n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	for( int i=0; i<n; i++){
		printf("\nNhap vao sinh vien thu %d", i);
		nhapSV(ds[i]);
	}
}

void xuatDanhSachSV(SinhVien ds[], int n){
	printf("\n%10s \t %15s \t %2s \t %10s \t %10s \t %6s", "MSV", "Ho ten","Ngay sinh", "Gioi tinh" ,"Noi sinh", "Diem");
	printf("\n");
	for( int i=0; i<n; i++){
		xuatsv(ds[i]);
	}
}

void sapXepSVdiemTang(SinhVien ds[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (ds[i].Diem>ds[j].Diem){
				SinhVien temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

void xuatDanhSachSVDiemLonHon24(SinhVien ds[], int n){
	printf("\nDanh sach sinh vien co diem thi dai hoc lon hon 24: ");
	printf("\n%10s \t %15s \t %2s \t %10s \t %10s \t %6s", "MSV", "Ho ten","Ngay sinh", "Gioi tinh" ,"Noi sinh", "Diem");
	printf("\n");
	for(int i=0; i<n; i++){
		if (ds[i].Diem > 24){
			xuatsv(ds[i]);
		}
	}
}

void timSVTheoTen(SinhVien ds[], int n, char ten[]){
	printf("\nKet qua tim kiem danh sach sinh vien ten %s: ", ten);
	int timSV = 0;
	for(int i=0; i<n; i++){
		if (strstr(ds[i].HoTen, ten)){
			xuatsv(ds[i]);
			timSV = 1;
		}
	}
	if (timSV == 0){
		printf("\n Khong co sinh vien ten %s trong danh sach.", ten);
	}	
}

void timSVTheoNgaySinh(SinhVien ds[], int n, int nsinh, int tsinh){
	printf("\nKet qua tim kiem danh sach sinh vien co ngay sinh: %d/%d ", nsinh, tsinh);
	int timSV = 0;
	for(int i=0; i<n; i++){
		if (ds[i].ngaySinh.ngay==nsinh && ds[i].ngaySinh.thang==tsinh){
			xuatsv(ds[i]);
			timSV = 1;
		}
	}
	if (timSV == 0){
		printf("\n Khong co sinh vien co ngay sinh %d/%d trong danh sach.", nsinh, tsinh);
	}
}

int main(){
	SinhVien ds[100];
	int n;
	nhapDanhSachSV(ds, n);
	xuatDanhSachSV(ds, n);
	printf("\n");
	sapXepSVdiemTang(ds, n);
	printf("\nDanh sach sinh vien sap xep tang dan theo diem: ");
	xuatDanhSachSV(ds,n);
	printf("\n");
	xuatDanhSachSVDiemLonHon24(ds, n);
	printf("\n");
	timSVTheoTen(ds, n, "Nga");
	printf("\n");
	timSVTheoNgaySinh(ds, n, 30, 04);
}

