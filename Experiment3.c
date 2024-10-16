#include <stdio.h>

int main()
{	
    int a, b, c;
    printf("Enter Number 1 : ");
    scanf("%d", &a); // Read and store the value in 'a'
    printf("Enter Number 2 : ");
    scanf("%d", &b); // Read and store the value in 'b'
    printf("Enter Number 3 : ");
    scanf("%d", &c); // Read and store the value in 'c'
    
    if (a > b && a > c) // Check if 'a' is the greatest
    {
        printf("Number 1 = %d is biggest", a); // Print if 'a' is the biggest
    }
    else if (b > c) // Check if 'b' is the greatest (no need to check against 'a' again)
    {
        printf("Number 2 = %d is biggest", b); // Print if 'b' is the biggest
    }
    else // If both previous conditions fail, it means 'c' is the greatest
    {
        printf("Number 3 = %d is biggest", c); // Print if 'c' is the biggest
    }
    
    return 0; // End of program
}

/*

"scanf("%d", &a);" : This reads the first number input by the user and stores it in 'a'.

"if (a > b && a > c)" : This checks if 'a' is greater than both 'b' and 'c'. If true, it prints that 'a' is the biggest.

"else if (b > c)" : If 'a' is not the greatest, this checks if 'b' is greater than 'c'. If true, it prints that 'b' is the biggest.

"else" : If neither 'a' nor 'b' is the greatest, this assumes that 'c' must be the biggest, so it prints 'c' as the largest number.

*/
