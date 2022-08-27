#include <stdio.h>

int main(void){
    int x,y,rows;
    printf("How many row : ");
    scanf("%d",&rows);
    
    for(x=1;x<=rows;x++){
        for(y=1;y<=x;y++){
            printf("* ");
        }
        printf("\n");
    }
}

/*


How many row : 9
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 


*/
