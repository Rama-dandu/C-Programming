#include <stdio.h>

int main()
{
    int a=5, *pi=&a;
    char b='x', *pc=&b;
    float c=5.5, *pf=&c;
    
	printf("%p\n",pi);
    printf("%p\n",pc);
    printf("%p\n",pf);
    
    pi++;
    pc++;
    pf++;
    
    printf("After increment operation: \n");
    printf("%p\n",pi);
    printf("%p\n",pc);
    printf("%p\n",pf);
    
    int num = 10;
    int *ptr = &num;
    
    printf("address of variable: %p\n",ptr);
    printf("pre-incremet: %p\n",++ptr);
    printf("post-increment: %p\n",ptr++);
    printf("pre-decrement: %p\n",--ptr);
    printf("post-decrement: %p\n",ptr--);
    
	return 0;
}
