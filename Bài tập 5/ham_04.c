#include <stdio.h>

int LN_n(int n, int a[]){
int LN_n = 0;
  for (int i = 0; i < n; i++){
    if (a[i] > LN_n){
      LN_n = a[i];}
	  }
  return LN_n;}
int giaithua (int n, int a[]){
int giaithua = 1;
  for (int i=0; i<n; i++){
    giaithua *=  a[i]; 
  }
  return giaithua;}
int main (){
  printf ("nhap n = ");
  int n;
  scanf ("%d", &n);
  int a[n];
  for (int i=0; i<n; i++){
    printf ("gia tri cua mang %d = ", i);
    scanf ("%d", &a[i]);
  }
  printf ("gia tri cua phan tu lon nhat = %d\n", LN_n(n, a));
  printf ("giai thua cua n = %d", giaithua(n, a));
}
