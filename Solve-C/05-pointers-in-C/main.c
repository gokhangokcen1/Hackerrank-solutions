#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    // We can use abs() for absolute difference. If you want to use this function you must import -> #include <stdlib.h>
    int n,m;
    n = *a + *b;
    m = *a - *b;
    if(m < 0) {
        m = -(m);
    }
    
    *a = n;
    *b = m;
   

    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
