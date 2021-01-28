#include <stdio.h>

int LN_n(int n, int arr[]){
int lonnhat = 0;
  for (int i = 0; i < n; i++){
    if (arr[i] > lonnhat){
      lonnhat = arr[i];}
	  }
  return lonnhat;}
int giaithua (int n, int arr[]){
int giaithua = 1;
  for (int i=0; i<n; i++){
    giaithua *=  arr[i]; 
  }
  return giaithua;}
int main (){
  printf ("nhap n = ");
  int n;
  scanf ("%d", &n);
  int arr[n];
  for (int i=0; i<n; i++){
    printf ("gia tri cua mang %d = ", i);
    scanf ("%d", &arr[i]);
  }
  printf ("gia tri cua phan tu lon nhat = %d\n", LN_n(n, arr));
  printf ("giai thua cua n = %d", giaithua(n, arr));
}
