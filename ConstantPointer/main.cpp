#include <stdio.h>

int main()
{
	//constant pointer
    int a = 10, b=20;
    int *const ptr = &a;
    
//    ptr = &b;//invalid
    *ptr = 30;//valid
    printf("a: %d\n",a);
    
	return 0;
}
