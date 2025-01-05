#include<stdio.h>

int main(){
    int i=6; // it store simple value.
    int*j=&i; // it store  address of pointer.
    int** k = &j; // it store address of pointer address.

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(k));// print the address of pointer address.
    printf("Program End!!!");
    return 0;
}