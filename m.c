#include <stdio.h>

int main() {
    // Input
    char C;
    scanf("%c", &C);

    // Calculate the next character
    char next_char;
    if (C == 'z') {
        next_char = 'a'; // Wrap around from 'z' to 'a'
    } else {
        next_char = C + 1; // Increment for other letters
    }

    // Output
    printf("%c\n", next_char);

    return 0;
}

