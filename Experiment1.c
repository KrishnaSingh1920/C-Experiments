#include <stdio.h>

int main()
{	
    // Declare five integer variables to store the marks of 5 subjects
    int sub1, sub2, sub3, sub4, sub5;
    
    // Ask the user to input the marks for each subject
    printf("Enter The Subjects Marks Out of 100: \n");
    
    // Input for subject 1
    printf("Subject 1 Marks:"); 
    scanf("%d", &sub1); // Read and store the marks in 'sub1'
    
    // Input for subject 2
    printf("Subject 2 Marks:");
    scanf("%d", &sub2); // Read and store the marks in 'sub2'
    
    // Input for subject 3
    printf("Subject 3 Marks:");
    scanf("%d", &sub3); // Read and store the marks in 'sub3'
    
    // Input for subject 4
    printf("Subject 4 Marks:");
    scanf("%d", &sub4); // Read and store the marks in 'sub4'
    
    // Input for subject 5
    printf("Subject 5 Marks:");
    scanf("%d", &sub5); // Read and store the marks in 'sub5'
    
    // Calculate the total marks by adding all 5 subject marks
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    
    // Calculate the percentage: divide total by 5, and use 5.0 to make sure the result is a float
    float percentage = total / 5.0;
    
    // Display the total marks and percentage
    printf("Total Marks : %d/500\n", total); // Print total out of 500
    printf("Percentage : %.2f", percentage); // Print percentage, rounded to 2 decimal places

    return 0; // End of program
}

/*

"int sub1, sub2, sub3, sub4, sub5;" : These are variables to store the marks for five subjects.

"scanf("%d", &sub1);" : This function is used to take input from the user. It stores the value entered by the user into the variable sub1.

"total = sub1 + sub2 + sub3 + sub4 + sub5;" : The total marks are calculated by adding all five subject marks.

"percentage = total / 5.0;" : The percentage is calculated by dividing the total marks by 5. Using 5.0 ensures the result is a decimal number (as int/float=float).

"printf("Total Marks : %d/500\n", total);" : This prints the total marks out of 500.

"printf("Percentage : %.2f", percentage);" : This prints the percentage, formatted to two decimal places (.2 means two decimal places).

*/