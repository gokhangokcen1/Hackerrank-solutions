#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i1,i2; 
    float f1,f2; 
    
    scanf("%d %d",&i1,&i2); 
    scanf("%f %f",&f1,&f2);
    
    printf("%d ",i1+i2);
    printf("%d\n",i1-i2);
    printf("%.1f ",f1+f2);
    printf("%.1f",f1-f2);
    
	
    
    return 0;
}
