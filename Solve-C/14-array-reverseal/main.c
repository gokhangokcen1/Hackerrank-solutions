#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */   
    // I changed the last for loop.
    
    for(i = 1; i<=num; i++)
        printf("%d ", arr[num-i]);
    return 0;
    /*
    6   num = 6 
    16 13 7 2 1 12 
    0  1  2 3 4 5      there is 5 elements and last one is fifth element.
    print -> arr[6-1]    print the #5 (last) element (12)
    print -> arr[6-2]    print the #4 element (1)
    print -> arr[6-3]    print the #3 element (2)
    print -> arr[6-4]    print the #2 element (7)
    print -> arr[6-5]    print the #1 element (13)
    print -> arr[6-6]    print the #0 (first) element (16)
    
    "i" will increase to 6. 
    
    */
    
}
