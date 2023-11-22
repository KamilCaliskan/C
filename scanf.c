/* you can take a string as input in C using scanf(“%s”, s). 
  But, it accepts string only until it finds the first space.
In order to take a line as input, you can use scanf("%[^\n]%*c", s); where
is defined as char s[MAX_LEN] where is the maximum size of . Here, [] is the scanset character. 
^\n stands for taking input until a newline isn't encountered. Then, with this %*c, 
 it reads the newline character and here, the used * indicates that this newline character is discarded. */


#include <stdio.h>

int main() {
    // Declare variables to store input
    char ch;
    char str[100];
    char sentence[100];

    // Take a character as input
    scanf("%c", &ch);

    // Take a string as input
    scanf("%s", str);

    // Clear the newline character from the buffer
    scanf("\n");

    // Take a sentence as input
    scanf("%[^\n]%*c", sentence);

    // Print the character
    printf("%c\n", ch);

    // Print the string
    printf("%s\n", str);

    // Print the sentence
    printf("%s\n", sentence);

    return 0;
}
