#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum = 0,i;
  if(gender == 'b')
  {
    for(int i=0;i<number_of_students;i+=2)
      {
        sum += marks[i]; 
      } 
  }
  if(gender == 'g')
  {
    for(int i=1; i<number_of_students;i+=2)
      {
        sum += marks[i];
      }
  }
  return sum;
  
  
  
  /* 
      SECOND WAY
    int sum = 0;
    for (int i=(gender == 'b' ? 0 : 1); i<number_of_students; i=i+2) //if gender equal to b i =  0 otherwise (gender = g) i = 1. ? is a conditional operator.
        sum += *(marks+i);
    
    return sum;
    
*/
}

int main() {
