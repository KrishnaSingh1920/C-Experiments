#include <stdio.h>

int main()
{	
    int n; // Declare an integer 'n' for the order of matrices
    printf("Enter The Order Of Matrices : ");
    scanf("%d", &n); // Read the order of the matrices from user input
    
    int arr1[n][n], arr2[n][n]; // Declare two n x n matrices
    
    // Input section for Matrix 1
    printf("Enter Matrix 1 : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter the number to store in matrix 1 at index i=%d j=%d: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]); // Read elements of Matrix 1
        }   
    }
    
    // Output section for Matrix 1
    printf("Matrix 1 : \n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]); // Print elements of Matrix 1
        }
        printf("\n");
    }
    
    // Input section for Matrix 2
    printf("Enter Matrix 2 : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter the number to store in matrix 2 at index i=%d j=%d: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]); // Read elements of Matrix 2
        }
    }
    
    // Output section for Matrix 2
    printf("Matrix 2 : \n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr2[i][j]); // Print elements of Matrix 2
        }
        printf("\n");
    }

    int sum[n][n], product[n][n]; // Declare matrices for sum and product

    // Addition section: to sum the matrices
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j]; // Sum corresponding elements of Matrix 1 and Matrix 2
        }
    }

    // Initialization section for Product Matrix
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            product[i][j] = 0; // Initialize product matrix to zero
        }
    }

    // Multiplication section: to multiply the matrices
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                product[i][j] += arr1[i][k] * arr2[k][j]; // Multiply and sum for each element in the product matrix
            } 
        }
    }

    // Output section for Sum Matrix
    printf("\n\n\n");
    printf("Sum Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]); // Print elements of the Sum Matrix
        }
        printf("\n");
    }
    
    // Output section for Product Matrix
    printf("Product Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", product[i][j]); // Print elements of the Product Matrix
        }
        printf("\n");
    }
    
    return 0; // End of program
}

/*
 * Program Overview:
 * 
 * This program performs matrix operations, specifically:
 * 1. Inputting two square matrices from the user.
 * 2. Calculating the sum of the two matrices.
 * 3. Calculating the product of the two matrices.
 * 4. Displaying the resultant sum and product matrices.
 * 
 * Key Functions:
 * 
 * - **Input Section for Matrix 1**: 
 *   Prompts the user to enter values for the first matrix and stores them in a 2D array.
 * 
 * - **Output Section for Matrix 1**: 
 *   Displays the values of the first matrix after input.
 * 
 * - **Input Section for Matrix 2**: 
 *   Prompts the user to enter values for the second matrix and stores them in another 2D array.
 * 
 * - **Output Section for Matrix 2**: 
 *   Displays the values of the second matrix after input.
 * 
 * - **Addition Section**: 
 *   Iterates through both matrices, calculates the sum of corresponding elements, 
 *   and stores the results in a third matrix called 'sum'.
 * 
 * - **Initialization Section for Product Matrix**: 
 *   Initializes the product matrix with zeros to prepare it for multiplication.
 * 
 * - **Multiplication Section**: 
 *   Performs matrix multiplication using a nested loop structure, 
 *   summing the products of corresponding elements and storing the results in a third matrix called 'product'.
 * 
 * - **Output Section for Resultant Matrices**: 
 *   Displays the resulting sum and product matrices to the user.
 * 
 * This structured approach ensures clarity and maintains functionality, making the program easy to understand and modify if necessary.
 */
