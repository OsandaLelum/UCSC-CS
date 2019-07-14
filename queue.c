#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int front=-1;
int rear=-1;
void insert(void);
int delete(void);
int peek(void);
void display(void);
 

 int main(){
 	int option,val;

 	do{
 		printf("\n  ******************************************");
 		printf("\n  ********** 1) insert an element***********");
 		printf("\n  ***********2) delete  an  elelment********");
 		printf("\n  ***********3) peek  **********************");
 		printf("\n  ***********4)  Display the Queue**********");
 		printf("\n  ***********5) EXIT   *********************");

 		printf("  Enter the  your option  ");
 		scanf("%d",&option);

 		switch(option){
 			case 1:
 			insert();
 			break;

 			case 2:
 			val =delete();
 			if(val!= -1){
                 printf("\n the number is delete is  :%d",val);

                 break;

 			}
           case 3:
              val =peek();
              if(val != -1)
              	printf("The First value in the  Queue is  :  %d",val);
              break;


            case 4:
              display();
              break;

 		}
 	}while(option !=5);

 	getch();
 	return 0;
 }

 void insert(){
       int num;
       printf("\n  Enter the  number to the  Enter tpo  the  Queue");
       scanf("%d",&num);
       if(rear==MAX -1)
       	printf("overflow");
       else if(front =-1 && rear ==-1)
       	front=rear=0;
       else
       	rear++;
       queue[rear]=num;

 }	

 int delete(){

 	int val;
 	if(front =-1 || rear <front){
 		printf("Under flow");
 		return -1;
 	}else{
 		val =queue[front];
 		front++;
 		if(front>rear)
 			front=rear=-1;
 		return val;
 	}
 }

 int peek(){
 	if(front==-1 ||front>rear){
       printf("\n  Queue is  empty");
       return -1;

 	}else{
 		retun queue[front];
 	}
 }


 void display(){
 	int i;
 	printf("\n");
 	if(front ==-1 || front>rear)
 		printf("\n Que is Empty");
 	else{
 		for(i= front ;i<=rear;i++)
 			printf("\t%d",queue[i]);
 	}

 }