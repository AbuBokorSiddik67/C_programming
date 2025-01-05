#include<stdio.h>

void change_to_thirty(int*);

void change_to_thirty(int* a){
    *a = *a * 30;
}
int main(){
    int x=45;
    printf("The value of x is %d\n",x);
    change_to_thirty(&x);
    printf("The value of x is %d\n",x);
    return 0;
}