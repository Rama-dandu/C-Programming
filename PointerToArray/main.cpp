#include <stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};
    
    //pointer to an array
    int (*parr)[5];
    
    //assigning the address of entire 5 elements to pointer to an array
    parr = &arr;
    
    printf("%p %p\n",parr,arr);
    
    printf("%d\n",(*parr)[0]);
    printf("%d\n",(*parr)[1]);
    printf("%d\n",(*parr)[2]);
    printf("%d\n",(*parr)[3]);
    printf("%d\n",(*parr)[4]);
    
    
	return 0;
}
