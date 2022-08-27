#include <stdio.h>

int main(void){
    int x,y,rows;
    printf("How many row : ");
    scanf("%d",&rows);
    
    for(x=1;x<=rows;x++){
        for(y=1;y<=x;y++){
            printf("%d",y);  //change y to x and see how pyramid changed.
        }
        printf("\n");
    }
}


/*
for Y 

How many row : 9
1
12
123
1234
12345
123456
1234567
12345678
123456789

for X

How many row : 9
1
22
333
4444
55555
666666
7777777
88888888
999999999


*/
