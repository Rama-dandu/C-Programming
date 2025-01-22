#include <stdio.h>


//function returning a pointer
int* fun(int);

int main()
{
	int x = 10;
    
    printf("%d\n",*(fun(x)));
	return 0;
}

int* fun(int x){
    static int y;
    y = x * x;
    
    return &y;
}
