#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int andMax=0,orMax=0,xorMax=0;

    for (int f=1; f<=n; f++) //[x][]
    {
        for (int s=f+1; s<=n; s++) //[][x]
            {
            if (((f&s) > andMax) && ((f&s) < k)) 
                {
                andMax = f&s;
                }
            if (((f|s) > orMax) && ((f|s) < k)) 
                {
                orMax = f|s;
                }
            if (((f^s) > xorMax) && ((f^s) < k)) 
                {
                xorMax = f^s;
                }
            }
    }

    printf("%d\n%d\n%d\n", andMax, orMax, xorMax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
