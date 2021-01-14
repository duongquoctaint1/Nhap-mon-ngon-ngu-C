#include <stdio.h>

int main()
{
  int n;
  printf("Nhap n : ");
  scanf("%d", &n);
  int a[n];
  int i;
  for (i = 0; i < n; i++)
  {
    printf("[%d] = ",i);
    scanf("%d", &a[i]);
  }
  printf("Hien thi tat ca phan tu :\n");
  for (i = 0; i < n; i++)
  {
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

  return 0;
}
