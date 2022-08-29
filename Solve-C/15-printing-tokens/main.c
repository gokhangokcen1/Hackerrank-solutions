#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s); //whole sentence is in s variable
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
    for(int i = 0; s[i] != '\0'; i++){ //if ith element of char not equal to NULL (\0)
        printf("%c",s[i]); //write ith element 
        if(s[i]==' '){ //if ith element is space ...
            printf("\n"); //... print new line
        }
    }
    return 0;
}
