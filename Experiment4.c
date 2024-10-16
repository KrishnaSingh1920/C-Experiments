#include <stdio.h>

int main()
{	
    int a;
    printf("Enter The Number : ");
    scanf("%d", &a); // Read and store the number input by the user in 'a'
    
    if (a % 2 == 0) // Check if 'a' is even
    {
        printf("The Number %d is even.", a); // Print if the number is even
    }
    else // If 'a' is not even, it must be odd
    {
        printf("The Number %d is odd.", a); // Print if the number is odd
    }
    
    return 0; // End of program
}

/*

"scanf("%d", &a);" : This reads the number input by the user and stores it in 'a'.

"if (a % 2 == 0)" : This checks if 'a' is divisible by 2 with no remainder, which indicates that 'a' is an even number.

"else" : If the number is not even, this assumes that it is odd and prints the corresponding message.

*/
