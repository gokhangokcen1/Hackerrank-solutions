#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    
    char h[8];
    char s[14];
    
    scanf("%c",&ch);
    printf("%c\n",ch);
    
    scanf("%s",h);
    printf("%s\n",h);
    
    scanf("\n");
    scanf("%[^\n]%*c",s);
    printf("%s",s);
    
    
    
    return 0;
}
