/*
Break/Continue:
3. wap to calculate the sum of numbers (10 numbers max)
  a) If the user enters a negative number, the loop terminates
*/

#include<stdio.h>
int main(){
    register int i=0;
    int j,sum;
    printf("enter the 10 numbers");
    for(;i<=10;i++){
     scanf("%d",&j);
     if(j<0)/*loop terminates for negetive number*/
     break;
     else
     sum+=j;
    }
    printf("sum = %d",sum);
    
    
    return 0;
}