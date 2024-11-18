#include<stdio.h>

int main(){
    char ch = 'A';
    printf("The character is %c\n",ch);
    printf("The character is %d\n",ch);
    if (ch>=97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character is uppercase\n");
    }
    return 0;
}