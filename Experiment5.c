#include <stdio.h>

int main()
{	
    float a, b; // Declare two float variables for the numbers
    char operator; // Declare a character variable for the operator
    printf("Enter the operand : ");
    scanf("%c", &operator); // Read and store the operator input by the user
    printf("Enter Number 1 : ");
    scanf("%f", &a); // Read and store the first number input by the user
    printf("Enter Number 2 : ");
    scanf("%f", &b); // Read and store the second number input by the user
    
    switch (operator) // Select operation based on the input operator
    {
    case '+': // Case for addition
        printf("Sum = %.2f", a + b); // Print the sum of the two numbers
        break; // Exit the switch statement
    case '-': // Case for subtraction
        printf("Difference = %.2f", a - b); // Print the difference of the two numbers
        break; // Exit the switch statement
    case '*': // Case for multiplication
        printf("Product = %.2f", a * b); // Print the product of the two numbers
        break; // Exit the switch statement
    case '/': // Case for division
        if (b != 0) // Check for division by zero
        {
            printf("Division = %.2f", a / b); // Print the result of division
        }
        else // If 'b' is zero, print an error message
        {
            printf("Error! Division by zero is not allowed.");
        }
        break; // Exit the switch statement
    default: // If the operator is not recognized
        printf("Error! Operator Does Not Exist!"); // Print an error message
        break; // Exit the switch statement
    }
    
    return 0; // End of program
}

/*

"scanf("%c", &operator);" : This reads the operator input by the user and stores it in 'operator'.

"switch (operator)" : This initiates a switch statement to determine which operation to perform based on the input operator.

"case '+':" : This checks if the operator is addition; if true, it calculates and prints the sum.

"case '-':" : This checks if the operator is subtraction; if true, it calculates and prints the difference.

"case '*':" : This checks if the operator is multiplication; if true, it calculates and prints the product.

"case '/':" : This checks if the operator is division; it also checks if the second number 'b' is not zero to avoid division by zero errors.

"default:" : This handles any operators that are not recognized, printing an error message.

*/
