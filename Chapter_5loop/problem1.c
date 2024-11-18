#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n= ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d*%d = %d\n",n,i,n*i);
    }
    
    return 0;
}