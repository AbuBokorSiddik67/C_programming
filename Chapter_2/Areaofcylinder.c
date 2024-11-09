#include<stdio.h>

int main(){
    //Calculate the area of circle and
    // modify the same program to calculate the volume of a cylinder given its radius and height. 
    int r,h;
    printf("Enter your cylinder radius:");
    scanf("%d",&r);
    printf("Enter your cylinder hight:");
    scanf("%d",&h);
    float area= 3.1416 * h * (r*r);
    printf("The area of cylinder is: %f",area);
    return 0;
}