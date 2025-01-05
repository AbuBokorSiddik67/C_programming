#include<stdio.h>

int sum(int,int);//it's function prototype.

//function definition
int sum(int m,int n){
    printf("The sum is %d\n",m+n);
    return m+n;
}

int main(){
    int a=2;
    int b=3;
    // int c=a+b;
    // printf("The sum is %d",c);

    sum(a,b);//Function call.

    int a1=10;
    int b1=3;
    // int c1=a+b;
    // printf("The sum is %d",c1);
    
    sum(a1,b1);

    int x1=20;
    int y1=30;
    int c=sum(x1,y1);//Function call.
    printf("%d\n",c);

    return 0;
}