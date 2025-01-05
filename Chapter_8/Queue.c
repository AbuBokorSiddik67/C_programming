#include<stdio.h>
#include<stdbool.h>

#define capacity 5

int ourQueue[capacity];
int font=-1,rear=-1,totalItem=0;

//--------------------------------------------------
bool isFull(){
    if(totalItem==capacity){
        return true;
    }
    return false;
}

bool imEmpty(){
    if(totalItem==0){
        return true;
    }
    return false;
}
//--------------------------------------------------

void enqueue(int item){
    if (isFull()){
        printf("Sorry, the Queue id full.\n");
        return;
    }
    rear = (rear+1)%capacity;
    ourQueue[rear]= item;
    totalItem++;
}

int dequeue(){
    if(imEmpty()){
        printf("Sorry, the Queue is empty.\n");
        return -1;
    }
    int frontItem = ourQueue[font];
    
    font=(font+1)%capacity;
    totalItem--;
    return frontItem;
}

void printQueue(){
    int i;
    for(i=0;i<capacity;i++){
        printf("%d ", ourQueue[i]);
    }
    printf("\n");
}

int main(){
    printf("Impliment Queue-------------\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
   
    printQueue();
    enqueue(50);
    printQueue();
    enqueue(60);
    printf("Deque: %d \n", dequeue());
    printQueue();
    enqueue(60);
    printQueue();
    return 0;
}