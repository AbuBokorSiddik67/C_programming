#include<stdio.h>

int main(){
    int r;
    printf("Enter your cylinder radius:");
    scanf("%d",&r);
    
    float area= 3.1416 * (r*r);
    printf("The area of cylinder is: %f",area);
    return 0;
}