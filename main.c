#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_LENGTH 50

// Structure to hold word and its frequency
typedef struct {
    char word[MAX_LENGTH];
    int count;
} WordFreq;

int main() {
    WordFreq words[MAX_WORDS];  // Array to store words and their frequencies
    int word_count = 0;  // Number of distinct words found

    char input[MAX_LENGTH];  // Buffer for input words

    printf("Enter words (type 'end' to stop):\n");

    // Read words until user types 'end'
    while (1) {
        scanf("%s", input);

        // If the user types 'end', stop the input process
        if (strcmp(input, "end") == 0) {
            break;
        }

        // Convert word to lowercase to handle case-insensitive counting
        for (int i = 0; input[i]; i++) {
            input[i] = tolower(input[i]);
        }

        // Check if the word already exists in the list
        int found = 0;
        for (int i = 0; i < word_count; i++) {
            if (strcmp(words[i].word, input) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }

        // If word is not found, add it to the list
        if (!found && word_count < MAX_WORDS) {
            strcpy(words[word_count].word, input);
            words[word_count].count = 1;
            word_count++;
        }
    }

    // Print the word frequencies
    printf("\nWord Frequency Count:\n");
    for (int i = 0; i < word_count; i++) {
        printf("%s: %d\n", words[i].word, words[i].count);
    }

    return 0;
}
