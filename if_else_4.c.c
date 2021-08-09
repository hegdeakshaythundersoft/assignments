/*
4.     wap to print  The number of consecutive same elements in the sequence should be same as the value.
Example: 1 2 2 3 3 3 4 4 4 4 is valid (input is 4 )              
1 2  3 3 3  is invalid. (input is 3) */


#include<stdio.h>
int main(){
	register int i=1,j;
	int value;
	printf("enter the value=");
	scanf("%d",&value);
	printf("\n");
	while(i<=value){
	j=1;
	while(j<=i){
	printf("%d",i);
	j++;
	}
	printf("\n");
	i++;
	}




return 0;
}
