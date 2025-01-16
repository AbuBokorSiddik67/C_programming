#include<stdio.h>

int main(){
    int a[100],n,i;

    printf("Enter your Array elements:\n");
    scanf("%d",&n);
    printf("Enter your values:" );
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}