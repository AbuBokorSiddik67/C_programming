#include<stdio.h>
#define capacity 3
int stack[capacity];
int top= -1;

void push(int x){
    if(top < capacity-1){
        top =top + 1;
        stack[top]=x;
        printf("Succesfully added item: %d\n",x);

        if(top==capacity-1){
            printf("Stack are full-fill\n");//Here top == maxstk/capacity then stack are fully loaded.
        }
    }
    else{
        printf("Impliments- no space! ---OverFlow--- for item value is %d \n",x);
    }
    
}

int pop(){
    if(top>0){
        int val= stack[top];
        top--;
        printf("Top item deleted value is %d\n",val);
        return val;
    }else{
        printf("No item here ---- UnderFlow---!\n");
        return -1;
    }
}

int peek(){
    if(top> -1){
        printf("The top value of stack is: %d\n",stack[top]);
        return top;
    }
    else{
        printf("No item here !!!\n");
        return -1;
    }

}

int main(){
    printf("Stack of C is: -\n");
    peek();
    push(10);
    push(20);
    push(30);
    pop();
    push(50);
    push(60);
    peek();
    return 0;
}