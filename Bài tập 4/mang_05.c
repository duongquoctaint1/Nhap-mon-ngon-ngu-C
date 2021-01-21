#include <stdio.h>

int main() {
  int n;
  // yeu cau nguoi dung nhap n tu ban phim
  printf("Nhap n = ");
  scanf("%d", &n);
//tao mang a chua so nguyen kich thuoc n
int a[n];
//nhap n phan tu cua mang a tu ban phim
int i;
for(int i = 0; i < n; i++){
  printf("Nhap phan tu thu %d: ", i + 1);
  scanf("%d", &a[i]);
  printf("\n");
}
// Hien thi n phan tu cua mang a
printf("Hien thi tat ca phan tu mang a:\n");
for(int i = 0; i < n; i++){
  printf("%d ", a[i]);
}
// yeu cau nguoi dung nhap 1 so nguyen m tu ban phim
int m;
printf("Nhap m = ");
scanf("%d", &m);
for(int i = 0; i < n; i++)
{
    if (a[i] == m)
    {
      printf("co ton tai");
      break;
    }
else {
  printf("khong ton tai");
  break;
  }  
}
  return 0;
}
