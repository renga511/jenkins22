#include <stdio.h> // Include the standard input/output library

int main() {
    // Declare integer variables to store the two numbers and their sum
    int num1, num2, sum;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");

    // Read the two integers from the user and store them in num1 and num2
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Print the result
    printf("Sum: %d\n", sum);

    return 0; // Indicate successful program execution
}