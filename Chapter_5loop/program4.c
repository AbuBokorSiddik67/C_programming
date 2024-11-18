#include<stdio.h>

int main(){
    int n;
    int i=0;
    printf("Enter your value of n:");
    scanf("%d",&n);
    do
    {
        printf("Value of i is %d\n",i);
        i++;
    }while(i<n);

    return 0;
}