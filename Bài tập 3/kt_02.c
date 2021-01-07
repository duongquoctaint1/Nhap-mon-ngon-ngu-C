#include <stdio.h>
#include <math.h>
int main(){
  int a,b,c;
  float delta;
  float x1,x2,x;
//nhap vao man hinh
printf ("a=");
scanf ("%d",&a);
printf ("b=");
scanf ("%d",&b);
printf ("c=");
scanf ("%d",&c);
printf("Tinh nghiem cua phuong trinh bac 2\n");
printf("Bat phuong trinh co dang ax2+bX+c=0\n");
//tinh delta
delta=(b*b)-4*a*c;
//tinh nghiem cua bat phuong trinh
if(delta>0){
  x1=(-b + sqrt(delta))/(2*a);
	x2=(-b - sqrt(delta))/(2*a);
  printf("phuong trinh %dx2 + %dx + %d = 0 co 2 nghiem\n",a,b,c);
  printf("x1=%f\n",x1);
  printf("x2=%f\n",x2);
}
else if(delta==0){
  x=-b/(2*a);
  printf("phuong trinh %dx2 + %dx + %d = 0 co nghiem kep\n",a,b,c);
}
else{
  printf("phuong trinh %dx2 + %dx + %d = 0 vo nghiem\n",a,b,c);
}
return 0;
}
