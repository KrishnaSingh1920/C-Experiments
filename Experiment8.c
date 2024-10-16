#include <stdio.h>

int main()
{	
    int a, search; // Declare integers 'a' for the number of elements and 'search' for the value to search
    printf("Enter The Number Of Elements : ");
    scanf("%d", &a); // Read and store the number of elements in 'a'
    
    int arr[a]; // Declare an array 'arr' of size 'a'
    
    // Loop to get user input for each element in the array
    for (int i = 0; i < a; i++)
    {
        printf("Enter the number to store at index %d : ", i); // Prompt user for input
        scanf("%d", &arr[i]); // Read and store the input in the array at index 'i'
    }
    
    printf("Enter The Number To Search In Array : ");
    scanf("%d", &search); // Read the number to search in the array
    
    // Loop to search for the specified number in the array
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == search) // Check if the current array element matches the search value
        {
            printf("Element %d Found At Index %d\nPosition Of Element : %d", search, i, i + 1); // Print the index and position
            break; // Exit the loop after finding the element
        }
    }
    
    return 0; // End of program
}

/*

"scanf("%d", &a);" : This reads the integer input from the user to determine how many elements will be stored in the array.

"int arr[a];" : This declares an array 'arr' with size 'a', allowing the program to store 'a' integers.

"for (int i = 0; i < a; i++)": This loop iterates from 0 to 'a - 1' to collect user input for each index of the array.

"scanf("%d", &search);" : This reads the integer value to search for in the array from the user.

"if (arr[i] == search)" : This condition checks if the current element in the array matches the search value.

"printf("Element %d Found At Index %d\nPosition Of Element : %d", search, i, i + 1);" : This prints the index of the found element and its position in a human-readable format.

*/
