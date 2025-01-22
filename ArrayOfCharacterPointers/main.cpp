#include <stdio.h>

int main()
{
	char *names[] = {"kernal","masters","rajesh"};
    
//    names[0][0] = 'p';

    names[0] = "rama";
    
    printf("size of names: %lld\n",sizeof(names));
    
    for(int i=0;i<3;i++){
        printf("%s\n",names[i]);
    }
	return 0;
}
