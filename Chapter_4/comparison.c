#include<stdio.h>
#include<string.h>

int main() {
    char a[100], b[100];

    printf("Enter your first string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; // Remove the newline character added by fgets

    printf("Enter your second string: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0'; // Remove the newline character added by fgets

    if (strcmp(a, b) == 0) {
        printf("\nStrings are equal.\n");
    } else {
        printf("\nStrings are not equal.\n");
    }

    return 0;
}
