#include <stdio.h>

int main()
{
	int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    
    printf("ptr1: %d\n",*ptr1);
    printf("ptr2: %d\n",**ptr2);
    printf("ptr3: %d\n",***ptr3);
	return 0;
}
