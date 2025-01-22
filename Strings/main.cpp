#include <stdio.h>

int main()
{
	char string1[6] = {'H','e','l','l','o','\0'};
    
    char string2[5] = "Rama";
    
    char string3[10];
    
    
    printf("%s\n",string1);
    printf("%s\n",string2);
    
    printf("Enter your name: \n");
    scanf("%s",string3);
    printf("%s",string3);

    

	return 0;
}


