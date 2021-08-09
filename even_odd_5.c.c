/*
f....Else:
5.Write a c program to print all even and odd numbers btwn 1-100  
o/p : even numbers are : 2,4,6,....100
      odd numbers are : 1,3,5,.....99 */


#include<stdio.h>
int main(){
	int i=1;
	printf("1-100 odd numbers are\n");
	while(i<=100){
	printf("%3d",i);/*width of 3 instead \t is given for integrated visiblity*/
	i+=2;
	if(i<100)
	continue;/*continues till 99*/
	else if(i==100)/*terminates at 100*/
	break;
	else{
	i=2;/*starts with 2 the even numbers*/
	printf("\n1-100 even numbers are\n");
	}
	
	}
return 0;
}
