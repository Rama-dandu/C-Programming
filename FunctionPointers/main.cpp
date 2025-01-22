#include <stdio.h>

void add(int a,int b){
    int sum = a+b;
    printf("sum: %d\n",sum);
}

void sub(int a,int b){
    int sub = a-b;
    printf("sub: %d\n",sub);
}

int main()
{
    int a = 10,b=20;
    char ch;
    
    printf("Enter character: ");
    scanf("%c",&ch);
    
    //function pointer which will hold the address of the function
	void (*fun)(int,int);
    
    if(ch == '+')
        fun = add;
    else if(ch == '-')
        fun = sub;
        
    fun(a,b);
    
	return 0;
}
