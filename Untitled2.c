#include <stdio.h>

int main() {
    // Reading input string
    char S[100001];
    scanf("%s", S);

    // Iterate through each character
    for (int i = 0; S[i] != '\0'; i++) {
        // Replace comma with space
        if (S[i] == ',') {
            S[i] = ' ';
        }
        // Convert uppercase to lowercase and vice versa
        else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] += 'a' - 'A';
        }
        else if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] -= 'a' - 'A';
        }
    }

    // Printing the modified string
    printf("%s\n", S);

    return 0;
}
