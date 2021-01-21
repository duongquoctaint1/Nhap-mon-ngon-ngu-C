#include <stdio.h>

int main(){
  int n;
  int i;
  printf("Nhap n : ");
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++)
  {
    printf("Nhap phan tu o mang a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  printf("Cac phan tu trong mang : \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  int m;
  printf("\nNhap m : ");
  scanf("%d", &m);
  int c = 0;
  for (i = 0; i < n; i++)
  {
    if (a[i] == m)
    {
      c++;
    }
  }
  printf("So phan tu co gia tri %d : %d\n", m, c);
  for (i = 0; i < n; i++)
  
    if (a[i] == m)
    {
      c++;
    }
  printf("Chi so cac phan tu tren la : ");
  for (i = 0; i < n; i++)
  {
    if (a[i] == m)
    {
      printf("%d ", i);
    }
  }
  return 0;
}
