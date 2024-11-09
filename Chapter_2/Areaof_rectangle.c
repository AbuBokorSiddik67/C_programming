/*Write a C program to calculate area of a rectangle: 

Using hard coded inputs. 

Using inputs supplied by the user. */

#include<stdio.h>

int main(){
    int h,w,area;
    //h=10;
    //w=5; > it is a hard coded input.
    printf("Enter your rectangle hight:");
    scanf("%d",&h);
    printf("Enter your rectangle Width:");
    scanf("%d",&w);
    area = h * w;
    printf("The area of rectangle is: %d",area);
    return 0;
}