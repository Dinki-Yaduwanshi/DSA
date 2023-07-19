
#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5 // PRE PROCESSOR MACRO

int stack[CAPACITY] ;
int top=-1;

void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void peek(void);
int main() {
    
   int ch; int item;
   while(1){
   printf("1.Push  \n");
   printf("2.Pop  \n");
   printf("3.Peek  \n");
   printf("4.Traverse  \n");
   printf("5.Quit  \n");
   
   printf("Enter your choice : ");
   scanf("%d" , &ch);
   
   switch(ch){
       
       case 1: printf(" Enter Element ");
             scanf("%d",&item);
             push(item);
             break;
       case 2: item=pop();
               if(item==0){
                   printf("stack is underflow");
               }else{
                   printf("popped item :%d \n");
               }
               break;
       case 3:peek();
               break;
       case 4: traverse();
               break;
       case 5:exit(0);
               break;
       default:printf("Invalid input");
   }
   
   }
}

void push(int ele){
    if(isFull()){
        printf("stack is overflow \n");
    }else{
        top++;
        stack[top]=ele;
        printf("%d pushed \n",ele);
    }
}

int isFull(){
    if(top==CAPACITY-1){
        return 1;
    }else{
        return 0;
    }
}

int pop(){
    if(isEmpty()){
        return 0;
    }else{
        return stack[top--];
        
    }
}


void peek(){
    if(isEmpty()){
        printf("Stack is empty \n");
    }else{
        printf("peek element is :%d \n",stack[top] );
    }
}

void traverse(){
      if(isEmpty()){
        printf("Stack is empty \n");
    }else{
        int i;
        printf("stack elements are :\n");
      for(i=0;i<=top;i++){
          printf("%d \n",stack[i]);
      }
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
