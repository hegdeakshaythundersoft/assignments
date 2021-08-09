/*
2. Switch case 
     take 2 double integers and an i/p from user :
	 if "a" , add the integers and print "sum is .." ,
	 if "s" , subtract the integers and print "diff is .." ,
	 default case : print "defaut case- noaction"
*/
#include<stdio.h>
int main(){
	double _1=1000,_2=2000;/*initialized and asigned doubles*/
	char opt;
	
	printf("Enter the option ''a'' for add and ''s'' for subtract\n");
	scanf("%c",&opt);/*option entry for add/subtract*/
	
	
	switch(opt){
	case ('a'):printf("The sum is = %lf",_1+_2);break;
	case ('s'):printf("The difference is = %lf",_1-_2);break;
	default:printf("default case no - action");
	}
return 0;
}
