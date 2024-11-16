#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,s,tarea;
    printf("Enter the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        s=(a+b+c)/2;
        tarea=sqrt((s*(s-a)*(s-b)*(s-c)));
        printf("Your area of triangle: %2.f",tarea);
    }
    else
    {
        printf("The triangle is not possible.");
    }
    return 0;
}