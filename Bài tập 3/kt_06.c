#include <stdio.h>
int main()

{
    //h = 1
    //1 hàng, 1 *, 0 khoang trang
    //h = 3
    //3 hàng:
    // - hang 1: 1*, 1 trang
    // - hang 2: 3*, 1 trang
     // - hang 3: 5*, 1 trang
	int h = 3;
	printf("  *\n");//hang 1
	printf(" ***\n");//hang 2
	printf("*****\n");//hang 3
	return 0;
}
