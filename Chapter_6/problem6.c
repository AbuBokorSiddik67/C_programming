#include<stdio.h>

int sumn(int n){
    if (n==1){
        return 1;
    }
    return sumn(n-1)+n;
}

int main(){
    int n=5;
    printf("The sum of number is :%d\n",sumn(n));
    return 0;
}