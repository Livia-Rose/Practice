#include <stdio.h>

int main() {
    int num;
    
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num); }
