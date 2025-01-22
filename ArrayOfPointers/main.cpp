#include <stdio.h>

int main()
{
	int a=10,b=20,c=30;
    int *arrp[5] = {&a,&b};
    
    arrp[2] = &c;
    
    printf("a: %d\n",*arrp[0]);
    printf("b: %d\n",*arrp[1]);
    printf("c: %d\n",*arrp[2]);
    printf("e: %d\n",*arrp[3]);
    printf("f: %d\n",*arrp[4]);
    
	return 0;
}
