/*Break/Continue:
3. wap to calculate the sum of numbers (10 numbers max)
b) If the user enters a negative number, it's not added to the result
 ex   a: user enters 
  1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed 
  ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum 
*/
#include<stdio.h>
int main(){
    register int i=0;
    int j,sum;
    printf("enter the 10 numbers");
    for(;i<=10;i++){
     scanf("%d",&j);
     if(j<0)
        continue;/*negetive num is skipped and loop continues*/
     else
     sum+=j;
    }
    printf("sum = %d",sum);
    
    
    return 0;
}