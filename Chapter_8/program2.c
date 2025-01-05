//Whats pointer.
#include<stdio.h>

int main(){
    char i = 'A';
    char* j= &i;// j is a pointer pointing to i(j is a char pointer.)

    float k=67.50;
    float* k1=&k;
    printf("The address of is  %p\n",&i);
    printf("The address of is  %p\n",j);
    printf("The address of is  %p\n",&k);

    printf("The value at address j is %d\n",*(&i));
    printf("The value at address j is %f\n",*(k1));

    return 0;
}