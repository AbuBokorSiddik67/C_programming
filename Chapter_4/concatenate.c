#include<stdio.h>
#include<string.h>

int main(){
    char a[50],b[50];
    printf("Enter your first string: ");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a, "\n")] = '\0'; //Remove newline character from a

    printf("Enter your second string: ");
    fgets(b,sizeof(b),stdin);
    b[strcspn(b, "\n")] = '\0'; // Remove newline character from b

    // Check for buffer overflow before concatenation
    if (strlen(a) + strlen(b) < sizeof(a)) 
    {
        strcat(a, b); // Concatenate strings
        printf("String obtained on concatenation is: %s\n", a);
    } 
    else 
    {
        printf("Concatenation cannot be performed. Buffer size exceeded.\n");
    }

    return 0;
}