#include <stdio.h>

int main()
{	
    int a, sum = 0; // Declare an integer 'a' for the number of elements and 'sum' initialized to 0
    printf("Enter The Number Of Elements : ");
    scanf("%d", &a); // Read and store the number of elements in 'a'
    
    int arr[a]; // Declare an array 'arr' of size 'a'
    
    // Loop to get user input for each element in the array
    for (int i = 0; i < a; i++)
    {
        printf("Enter the number to store at index %d : ", i); // Prompt user for input
        scanf("%d", &arr[i]); // Read and store the input in the array at index 'i'
    }
    
    // Loop to calculate the sum of all elements in the array
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr[i]; // Add the value at index 'i' to 'sum'
    }
    
    printf("Sum of all elements of the array : %d", sum); // Print the total sum
    return 0; // End of program
}

/*

"scanf("%d", &a);" : This reads the integer input from the user to determine how many elements will be stored in the array.

"int arr[a];" : This declares an array 'arr' with size 'a', allowing the program to store 'a' integers.

"for (int i = 0; i < a; i++)": This loop iterates from 0 to 'a - 1' to collect user input for each index of the array.

"sum = sum + arr[i];" : This updates the 'sum' variable by adding the value stored at index 'i' in the array.

"printf("Sum of all elements of the array : %d", sum);" : This prints the total sum of all elements in the array.

*/
