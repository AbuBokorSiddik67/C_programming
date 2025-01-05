#include<stdio.h>

void gdm();// Return no value.
void gad();// Return no value.
// Function definition
void gdm(){
    printf("Good morning!\n");
}
void gad(){
    printf("Good afternoon!\n");
}

int main(){
    // Function call.
    gdm();
    gad();

    return 0;
}