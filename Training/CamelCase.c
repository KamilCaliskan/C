#include <ctype.h>  // For toupper and isalpha

void to_camel_case(const char *text, char *camel) {
    int capitalize_next = 0;  // Flag to indicate if we should capitalize the next character
    int i = 0;  // Index for the output `camel`

    while (*text) {
        if (*text == '-' || *text == '_') {
            // Set flag to capitalize next character and skip this delimiter
            capitalize_next = 1;
        } else {
            // Check if we need to capitalize the current character
            if (capitalize_next) {
                camel[i++] = toupper(*text);
                capitalize_next = 0;  // Reset flag after capitalization
            } else {
                // If it's the first character or not following a delimiter, copy as-is
                camel[i++] = *text;
            }
        }
        text++;  // Move to the next character in input `text`
    }

    // Null-terminate the output string
    camel[i] = '\0';
}
