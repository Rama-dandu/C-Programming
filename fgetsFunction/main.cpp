#include <stdio.h>

int main()
{
	FILE *fp;
    char str[200];
    
    fp = fopen("text_file1.txt","r");
    if(fp == NULL){
        printf("Error in opening a file\n");
        return(-1);
    }
    
    if(fgets(str,200,fp) != NULL){
        puts(str);
    }
    
    fclose(fp);
    return 0;
}
