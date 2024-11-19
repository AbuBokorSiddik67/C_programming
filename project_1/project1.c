#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomNumber = (rand() % 100) +1;
    int no_of_guesses = 0;
    int guessed;
    //printf("Random Number is: %d\n",randomNumber);
    

    do{
        printf("Guess the number:");
        scanf("%d",&guessed);
        if(guessed>randomNumber){
            printf("lower number please!\n");
        }
        else{
            printf("higher number please!\n");
        }
        no_of_guesses++;
        
    }while(guessed != randomNumber);
    
    printf("Your guessed the number in %d guessed\n",no_of_guesses);


    return 0;
}