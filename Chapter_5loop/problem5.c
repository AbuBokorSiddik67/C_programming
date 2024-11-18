#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter value of n= ");
    scanf("%d",&n);//input 10.
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Ten natural number is: %d\n",sum);

    return 0;
}