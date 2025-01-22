#include <stdio.h>

using namespace std;

int main()
{
    int a=10,b=20;
    
    //pointer to constant
    int const *ptr;
    ptr = &a;//valid
    ptr = &b;//valid
    
//    *ptr = 30;// not valid
    
	printf("value: %d\n",*ptr);
	return 0;
}
