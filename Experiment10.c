#include <stdio.h>

// Function to calculate the length of a string
int my_strlen(char str[]) {
    int i = 0; // Initialize an index to zero
    while (str[i] != '\0') { // Loop until we hit the null terminator
        i++; // Increment the index for each character
    }
    return i; // Return the total count of characters (length)
}

// Function to copy a string from str2 to str1
void my_strcpy(char str1[], char str2[]) {
    int i = 0; // Initialize an index to zero
    while (i <= my_strlen(str2)) { // Copy each character from str2 until the null terminator
        str1[i] = str2[i]; // Assign each character to str1
        i++; // Move to the next character
    }
}

// Function to concatenate two strings n1 and n2 into n1n2
void my_strcat(char n1[], char n2[], char n1n2[]) {
    int i = 0; // Index for the first string
    while (i < my_strlen(n1)) { // Copy characters from n1 to n1n2
        n1n2[i] = n1[i]; // Copy each character from n1
        i++; // Move to the next character
    }
    
    int j = 0; // Index for the second string
    while (n2[j] != '\0') { // Append characters from n2 to n1n2
        n1n2[i] = n2[j]; // Copy each character from n2
        i++; // Move to the next position in n1n2
        j++; // Move to the next character in n2
    }
    n1n2[i] = '\0'; // Add null terminator at the end of the concatenated string
}

int main() {
    char str[50]; // Array to hold user input string
    printf("Enter a string to check its length: "); // Prompt user for input
    scanf("%49s", str); // Read a word (up to 49 characters) from the user

    int count = my_strlen(str); // Calculate the length of the string
    printf("The Length Of The String Is: %d\n", count); // Output the length

    char str2[50]; // Array to hold user input string 2 which is to be copied
    printf("Enter a string to copy it to another string: "); // Prompt user for input
    scanf("%49s", str2); // Read a word (up to 49 characters) from the user

    char copy[50]; // Ensure there is enough space for the copied string
    my_strcpy(copy, str2); // Copy str2 to copy
    printf("The Copied String Is: %s\n", copy); // Print the copied string

    char n1[50], n2[50]; // Arrays for user input strings to concatenate
    printf("Enter the first string for concatenation: "); // Prompt for first string
    scanf("%49s", n1); // Read the first string

    printf("Enter the second string for concatenation: "); // Prompt for second string
    scanf("%49s", n2); // Read the second string

    char n1n2[100]; // Array to hold the concatenated result
    my_strcat(n1, n2, n1n2); // Concatenate n1 and n2
    printf("The Concatenated String Is: %s\n", n1n2); // Print the concatenated string

    return 0; // End of the program
}

/*
 * This program demonstrates basic string operations in C:
 *
 * 1. **my_strlen**: This function calculates the length of a string 
 *    by counting each character until it encounters the null terminator 
 *    (`'\0'`), which signifies the end of the string.
 *
 * 2. **my_strcpy**: This function copies the content of one string 
 *    (str2) to another string (str1). It continues copying until it 
 *    reaches the null terminator of str2, ensuring that the entire 
 *    string, including the null terminator, is copied.
 *
 * 3. **my_strcat**: This function concatenates two strings. It first 
 *    copies all characters from the first string (n1) to a new string 
 *    (n1n2), and then appends all characters from the second string 
 *    (n2) to the end of n1n2, followed by adding a null terminator 
 *    to mark the end of the concatenated string.
 *
 * The main function demonstrates the use of these string operations by 
 * accepting user input for strings, copying one string into another, 
 * concatenating two strings, and printing the results to the console. 
 *
 * Important Note: Make sure that the destination strings (str2 and 
 * n1n2) have enough allocated memory to avoid overflow and undefined 
 * behavior during string operations. 
 */
