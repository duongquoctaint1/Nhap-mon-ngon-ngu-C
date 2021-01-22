#include <stdio.h>

int sum(int a, int b, int c);// khai bao ham sum 
int main(){
int a = 1, b = 2, c = 3;
printf("a+b+c=%d", sum(a,b,c));
return 0;
}
int sum(int a, int b, int c){
return a+b+c;}



#include <stdio.h>

void sum(int a, int b, int c);// khai bao ham sum 
int main(){
int x= 1, y = 2, z = 3;
int sum = x + y + z;
printf ("Tong la %d", sum);
}
void sum(int a, int b, int c){
}
