#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.



int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    if (n == 1) 
        return a; //write a for n = 1 
    else if (n == 2)
        return b; //write b for n = 2 
    if (n == 3)
        return c; //write c for n = 3 
    else {
        return find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c); //write (n-1)+(n-2)+(n-3) for n 
    /*
    
     For ex. n = 5 a=1 b=2 c=3 
     (5-1)+(5-2)+(5-3) = (n=4)+(n=3)+(n=2)
                         (n=4)+ c   +  b
                         (n=4)+ 3   + 2 = 5 + (n=4)
    look for x so, n=4 
    (4-1)+(4-2)+(4-3) = (n=3) + (n=2) + (n=1)
                           c  +    b  +    a
                   (n=4) = 3  +    2  +    1 = 6
                   
         5 + (n=4)
         5 + 6 =11          
                          
    
    */
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
