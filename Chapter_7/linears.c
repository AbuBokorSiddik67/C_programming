#include<stdio.h>

int main(){
    int i,n, num[10]={10,12,2,50,6,8,9};
    printf("Enter your searching value:");
    scanf("%d",&n);
    int position = -1;

    for (i = 0; i < n; i++)
    {
        if(n==num[i]){
            position = i + 1;
            break;
        }
    }
    if (position == -1)
    {
        printf("Value not found\n");
    }
    else{
        printf("Your index of array is %d value is %d\n",position,num[i]); 
    }
       
    return 0;
}