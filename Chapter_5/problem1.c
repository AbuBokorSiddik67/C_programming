#include<stdio.h>

int main(){
    int a=10;
    //if (a=10) it is not right.
    if (a==11)// only = is assignment operator.
    {
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }
    return 0;
}