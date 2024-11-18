#include<stdio.h>

int main(){
    // write a program to find grade of a student given barks based on below.
    int mark;
    printf("Ener your marks: ");
    scanf("%d",&mark);
    if (mark<=100 && mark>=90)
    {
        printf("Your grade is: A+\n");
    }
    else if (mark<=90 && mark>=80)
    {
        printf("Your grade is: A\n");
    }
    else if (mark<=80 && mark>=70)
    {
        printf("Your grade is: B+\n");
    }
    else if (mark<=70 && mark>=60)
    {
        printf("Your grade is: B\n");
    }
    else if (mark<=60 && mark>=50)
    {
        printf("Your grade is: C+\n");
    }
    else if (mark<=50 && mark>=40)
    {
        printf("Your grade is: C\n");
    }
    else if (mark<=40 && mark>=30)
    {
        printf("Your grade is: F\n");
    }
    else{
        printf("Your entered mark is invalid\n");/* code */
    }
    
    return 0;
}