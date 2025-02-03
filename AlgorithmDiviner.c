#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Sigil ASCII Art
const char* sigil[] = {
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                            .:-......-:.                                            ",
    "                                         .::............::.                                         ",
    "                                        .:....:..:...:=:..:.                                        ",
    "                                       ::. .+:. .::   ..-..::                                       ",
    "                                      ...  -.=   .:.    .: ...                                      ",
    "                                      ::.  :.=    .:.   ..:.::                                      ",
    "                                      ::  -.-.:    .:.  ..-.::                                      ",
    "                                      ... :.:.-     :.. .: ...                                      ",
    "                                       ::. --:::.....-..-..::                                       ",
    "                                        .:..:-.=......-...:.                                        ",
    "                                         .::......:.....::                                          ",
    "                                            .:-:....:-:.                                            ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    ",
    "                                                                                                    "
};

// Function to display the sigil art
void displaySigil() {
    printf("\nSigil:\n");
    for (int i = 0; i < sizeof(sigil) / sizeof(sigil[0]); i++) {
        printf("%s\n", sigil[i]);
    }
}

// Function to generate an anagram-like random text
void generateAnagram(char* input) {
    int length = strlen(input);
    char pool[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char output[length + 1];
    output[length] = '\0';

    for (int i = 0; i < length; i++) {
        output[i] = pool[rand() % (sizeof(pool) - 1)];
    }

    printf("\nNoosphere Response (Anagram): %s\n", output);
}

int main() {
    char question[256];


    // Seed the random number generator
    srand(time(NULL));

    // Display the sigil
    displaySigil();

    // Prompt the user for a question
    printf("\nWhat question do you have for the noosphere?\n");
    fgets(question, sizeof(question), stdin);

    // Generate and display a random response
    generateAnagram(question);

    return 0;
}

// Created by d_hic on 2/3/2025.
//
