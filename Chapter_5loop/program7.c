#include<stdio.h>
// Use for loop.
int main(){
    int n=10;
    for(int i=1;i<=n;i++){
        

        if(i==5){

            //break;//It use exit the loop.
            continue;//skip this iteration now.
        }

        printf("Hello I am %d\n",i);
    }
    return 0;
}