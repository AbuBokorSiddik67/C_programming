#include<stdio.h>

int main(){

    int a[10],n,i,max,min;
    printf("Enter your Array Elements:\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    // max=a[0];
    // for ( i = 0; i < n; i++)
    // {
    //     if (max<a[i])
    //     {
    //         max=a[i];
    //     }
        
    // }
    // printf("The maximum value is: %d\n",max);
    min=a[0];
    for ( i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min=a[i];
        }
        
    }
    printf("The maximum value is: %d\n",min);

    return 0;
}