#include <stdio.h>

int main()
{
    int a = 10;
    char b = 'x';
    float c = 5.7;
    
    void *ptr = &a;
	printf("a: %d\n", *(int *)ptr);
    
    ptr = &b;
    printf("b: %c\n",*(char *)ptr);
    
    ptr = &c;
    printf("c: %f\n",*(float *)ptr);
    
	return 0;
}
