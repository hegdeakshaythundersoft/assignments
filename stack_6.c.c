/*
6.create a stack and push 1,2,3 and pop once - print after even push and pop 
*/

#include<stdio.h>
#include<stdlib.h>

struct stack_{
	int member;
	struct stack_ *down;
	struct stack_ *pointer;/*user defined stack pointer pointing to the latest push*/
};


typedef struct stack_ s;
s *down=NULL;
s *pointer=NULL;




void push_(int data){
	s *new=(s*)malloc(sizeof(s));
	new->member=data;
	
	
	if(down==NULL){
		s *bottom=(s*)malloc(sizeof(s));
		bottom->down=NULL;
		new->down=bottom;
		down=new;
	}
	else
	{
		new->down=down;
		down=new;
	}
	pointer=down;

}


void display(){
	s *temp=down;
	do{
	printf("%d\n",temp->member);
	temp=temp->down;
	}while(temp->down!=NULL);
}

void pop_(){
    
       printf("%d\n",pointer->member); 
       pointer=pointer->down;
}


int main(){
	push_(7);/*pushed the values*/
	push_(8);
	push_(9);
	push_(10);
	push_(11);
	push_(12);
	//display(); /*for traversing*/
	pop_();/*popped the stack*/
	pop_();
return 0;
}
