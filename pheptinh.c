#include <stdio.h>

int main(void)
{
// Khai bao bien a, b kieu kieu so nguyen
int a,b;
// khoi tao bien a = 3
a = 3;
// khoi tao bien b = 5
b = 5;
// Khai bao cac bien tong, hieu, tich
int tong, hieu, tich;
// Khai bao bien thuong
double thuong;
// gan tong a+b
tong = a+b;
// gan hieu a-b
hieu = a-b;
// gan tich a*b
tich = a*b;
// gan thuong a / b va ep kieu
thuong = (double)  a/b;
// hien thi ra man hinh tong = 8, hieu = -2, tich = 15, thuong = 0.6
printf("a\t b \t a + b \t a - b \t a * b \t a / b ");
printf("\n");
printf("%d \t %d \t %d\t %d\t %d\t %0.1f",a,b,tong,hieu,tich,thuong);

getchar();
return 0;
}
