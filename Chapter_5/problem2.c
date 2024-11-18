#include<stdio.h>

int main(){
    //Write a program to determine wheter a student has passed or failed.
    int mark1,mark2,mark3;
    printf("Ener marks1: ");
    scanf("%d",&mark1);
    printf("Ener marks2: ");
    scanf("%d",&mark2);
    printf("Ener mark3): ");
    scanf("%d",&mark3);
    printf("Your entered marks are: %d %d and %d\n",mark1,mark2,mark3);
    if(mark1<33 || mark2<33 || mark3<33){
        printf("You are failed");
    }
    else if((mark1+mark2+mark3)/3 < 40){//calculate average mark.
        printf("You are failed due less percentage.\n");
    }
    else{
        printf("You are passed!\n");
    }
    return 0;
}