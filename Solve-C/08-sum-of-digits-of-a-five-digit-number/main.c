#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int bolen=10000,toplam=0;
    while(n>0)
    {
        toplam += n/bolen;
        n = n%bolen;
        bolen = bolen / 10;

    }
    printf("%d",toplam);
    return 0;
}
