#include<stdio.h>
//Write a program to calculate the factorial of a given number using a for loop.
int main(){
    //5!= 5x4x3x2x1
    int n=5,product=1;
    int i=1;
    while ( i <= n )
    {
        product *=i;
        i++;
    }
    printf("Factoral value is :%d\n",product);

    return 0;
}