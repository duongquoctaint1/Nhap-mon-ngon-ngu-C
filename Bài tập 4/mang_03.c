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
  printf("\nHien thi tat ca phan tu chan:\n");
  for (i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      printf("%d ", a[i]);
    }
  }
int b = 0;
for (i=0; i<n; i++){
  if (a[i]%2 == 0 && a[i] !=0)
  b= b + 1;
  }
printf(" tong cac so chan: %d",b);
printf("\nHien thi tat ca phan tu le:\n");
  for (i = 0; i < n; i++)
  {
    if (a[i] % 2 != 0)
    {
      printf("%d ", a[i]);
    }
  }
int c = 0;
for (i=0; i<n; i++){
  if (a[i]%2 != 0 && a[i] !=0)
  c= c + 1;
  }
printf(" tong cac so le: %d",c);
  printf("\nHien thi so 0:\n");
  for (i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      printf("%d ", a[i]);
    }
  }
  return 0;
}
