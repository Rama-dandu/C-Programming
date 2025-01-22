#include <stdio.h>

int main()
{
	char *ptr = "kernel";
    
    printf("address of pointer: %p\n",ptr);
    printf("size of constant pointer: %d\n",sizeof(ptr));
    
//    ptr[0] = 'm';//not valid
    
    ptr = "masters";

    printf("string: %c\n",*(ptr+1));
	return 0;
}
