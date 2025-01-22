//callback functions - passing the function pointer as argument to another function

#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int funName(int (*fun)(int,int)){
    
    return fun(40,50);
}

int main()
{
    int (*fun)(int,int) = add;
    
    int value = funName(fun);
    
    printf("%d\n",value);

	return 0;
}
