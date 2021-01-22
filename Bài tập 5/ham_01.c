#include <stdio.h>

int sum(int a, int b, int c);// khai bao ham sum 
int main(){
int a = 1, b = 2, c = 3;
printf("a+b+c=%d", sum(a,b,c));
return 0;
}
int sum(int a, int b, int c){
return a+b+c;}
