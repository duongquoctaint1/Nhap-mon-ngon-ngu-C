#include <stdio.h>

int main(){
    int a[4] = {3, 5 , 7, 2}, s = 0;
    int i;
    for (i = 0; i < 4; i++){
        printf("%d ", a[i]);
        s = s + a[i];
    }
    printf("\n%d", s);
    return 0;
}
