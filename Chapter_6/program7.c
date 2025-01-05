#include<stdio.h>

int main(){
    int n=3;
    for (int i=0; i< n; i++){
        //if i=0 >print 1 stat.
        //if i=0 >print 3 stat.
        //if i=0 >print 5 stat.
        //no-of-star = (2*i-1)
        for (int  j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        

    }
    return 0;
}