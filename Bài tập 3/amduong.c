#include <stdio.h>

int main(){
	int a;
	printf("nhap a ");
	scanf ("%d" , &a);
	if(a > 0) { 
	     printf("%d duong", a);
    }else if (a == 0){
         printf("a = 0", a);
    }else {     
         printf("%d am", a);
    }  
	getchar();
	return 0;
}
