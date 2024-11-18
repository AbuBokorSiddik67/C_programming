#include<stdio.h>

int main(){
    int a=5,b=6,c=10,d=20;
    if (a>b && a>c && a>d){
        printf("The greatest number is %d\n",a);
    }
      if (b>a && b>c && b>d){
        printf("The greatest number is %d\n",b);
    }
      if (c>b && c>a && c>d){
        printf("The greatest number is %d\n",a);
    }
    else{
        printf("The greatest number is %d\n",d);
    }


    return 0;
}