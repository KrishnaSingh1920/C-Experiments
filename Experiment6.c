#include <stdio.h>

int main()
{	
    int n, factorial = 1; // Declare an integer 'n' for the input number and 'factorial' initialized to 1
    printf("Enter The Number to find its factorial : ");
    scanf("%d", &n); // Read and store the number input by the user in 'n'
    
    // Loop from 1 to 'n' to calculate the factorial
    for (int i = 1; i <= n; i++) 
    {
        factorial = factorial * i; // Multiply 'factorial' by 'i' to compute the factorial
    }
    
    printf("Factorial of %d is %d", n, factorial); // Print the computed factorial
    return 0; // End of program
}

/*

"scanf("%d", &n);" : This reads the integer input from the user and stores it in 'n'.

"for (int i = 1; i <= n; i++)": This loop starts from 1 and increments up to 'n' to calculate the factorial.

"factorial = factorial * i;" : This updates the 'factorial' variable by multiplying it with the current value of 'i'.

"printf("Factorial of %d is %d", n, factorial);" : This prints the result, showing the factorial of the number input by the user.

*/
