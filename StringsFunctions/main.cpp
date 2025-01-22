#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Kernel Masters";
    
    //strlen function - used to find the length of string
    printf("length of string: %u\n",(unsigned)strlen(str1));
    
    //strlwr function - used to convert the upper case letters to lower case letters
    printf("lower case string: %s\n",strlwr(str1));
    
    //strupr function - used to convert the lower case letter to upper case letters
    printf("upper case string: %s\n",strupr(str1));
    
    //strcpy function - used to copy the source string to destination string
    //strcat function - used to cancatinate a string with another string
    char source[50];
    char dest[14];
    
    strcpy(source,"hello");
    strcpy(dest," world");
    
    strcat(source,dest);
    
    printf("cancatinated string: %s\n", source);
    
    //strncpy function - used to copy only first n characters of source string to destination string
    //strncat function - used to cancatinate only first n characters of source stirng to destination string
//    strncpy(source,"nagalakshmi",4);
//    strncpy(dest,"nettikallu",10);
    
//    strncat(dest,source,4);
//    
//    printf("n cancatinated string: %s\n",dest);
    
    //strcmp function - used to comparare two strings. if both strings are same it returns 0
    //stricmp function - used to compare two strings by ignoring the case sensitivity
    //strnicmp function - used to n characters of two string by ignroing case sensitiviy
    //strchr function - used to find the first occurence of character in a given string. it returns the address of that charecter
    //strstr function - used to find the first occurence of string in a given string
    
    //strset function - used to set the string with given character
    char str3[20] = "rama";
    
    printf("before string set: %s\n",str3);
    printf("after string set: %s\n",strset(str3,'#')); 
    printf("after string set: %s\n",str3);
    
    //strnset function - used to set the first n characters of string with given character
    char str4[20] = "masters";
    
    printf("before string set: %s\n",str4);
    printf("after string set: %s\n",strnset(str4,'#',4)); 
    printf("after string set: %s\n",str4);
    
    //strrev function - used to reverse the string
    char str5[10] = "aruna";
    
    printf("reversed string: %s\n",strrev(str5));
    
    
	return 0;
}
