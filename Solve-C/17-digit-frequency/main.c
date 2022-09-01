#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char string; 
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    while (scanf("%c",&string) != EOF) 
    {
        if(string >= '0' && string <= '9')
            arr[string-'0'] +=1; //increment by one to that element of string . for more information cc4e.com chapter 1 arrays
    }
    
    for(int i; i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}
