#include<stdio.h>

int factorial(int n){
    if( n==1 || n==0){//Base condition
        return 1;
    }
    else{
        // Factorial(n) = Factorial(n-1)*n;
        
        return (n * factorial(n-1));
    }
}

int main(){

    int a;
    printf("Enter your value:");
    scanf("%d",&a);
    printf("The factorial of %d is %d\n",a,factorial(a));
    
    return 0;
}