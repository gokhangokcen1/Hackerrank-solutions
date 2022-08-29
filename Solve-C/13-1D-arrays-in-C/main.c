#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,sum=0;
    scanf("%d",&n);
    
    int *arr = malloc(n * sizeof(int)); //take memory places how many you need.
    for (int i = 0;i<n;i++) {
        scanf("%d",&arr[i]); //i^th element of array
        sum += arr[i]; 
    }
    printf("%d",sum);
    free(arr); //deallocate the memory
    
    return 0;
}
