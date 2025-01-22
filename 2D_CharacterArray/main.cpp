#include <stdio.h>

int main()
{
	char masterslist[6][10] = {"akshay","gopal","raman","srinivas","rajesh","parag"};
    
    masterslist[0][0] = 'm';
    
    for(int i=0;i<6;i++){
        printf("%s\n",masterslist[i]);
    }
	return 0;
}
