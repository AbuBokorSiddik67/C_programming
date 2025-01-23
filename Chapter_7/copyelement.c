#include<stdio.h>

int main(){
    int a1[5]={10,20,30,40,50},a2[5],i;


    printf("Array-1 \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a1[i]);
    }
    
    // Loop for copy array1 to array2.
    for ( i = 0; i < 5; i++)
    {
        a2[i] = a1[i];
    }
    
    printf("Array-2\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a2[i]);
    }

    return 0;
}