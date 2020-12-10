#include <stdio.h>

int main(){
	// khai bao bien don gia,so luong,thanh tien
	int dongia,soluong;
	float thanhtien;
	printf ("nhap don gia =");
	scanf("%d",& dongia) ;
	printf ("nhap so luong =");
	scanf("%d",& soluong);
	thanhtien =(float)soluong*dongia;
	if (soluong >= 5){ 
	thanhtien=((float)soluong*dongia)*0.75;
		printf ("%f",thanhtien );
	}else {
		printf ("%f",thanhtien);
	}
  getchar();
  return 0;
}
