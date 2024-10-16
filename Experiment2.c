#include <stdio.h>

int main()
{	
    // Declare three integer variables: 'a', 'b', and 'temp'
    int a, b, temp;
    
    // Ask the user to input the first number
    printf("Enter Number 1 : ");
    scanf("%d", &a); // Read and store the value in 'a'
    
    // Ask the user to input the second number
    printf("Enter Number 2 : ");
    scanf("%d", &b); // Read and store the value in 'b'
    
    // Swap the values of 'a' and 'b' using the temporary variable 'temp'
    temp = a;   // Store the value of 'a' in 'temp' (now 'temp' holds the original value of 'a')
    a = b;      // Assign the value of 'b' to 'a' (now 'a' holds the value of 'b')
    b = temp;   // Assign the original value of 'a' (stored in 'temp') to 'b'
    
    // Output the swapped values
    printf("Number 1 : %d\n", a); // Print the new value of 'a'
    printf("Number 2 : %d\n", b); // Print the new value of 'b'
    
    return 0; // End of program
}

/*

"temp = a;" : We store the value of a in a temporary variable temp so we don't lose it when we change the value of a.

"a = b;" : Now we assign the value of b to a, effectively swapping the value.

"b = temp;" : Finally, we assign the original value of a (stored in temp) to b.

*/