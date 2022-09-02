#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int n,m;
    n = *a + *b;
    m = *a - *b;
    if(m <0) // if the result of a-b minus
        m = -(m); // multiply the result with -1 
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
