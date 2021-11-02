// Title: Accessing characters in a string

#include <iostream>
#include <string>
#include <cctype> // Include to use std::isalpha and std::tolower

int main()
{
    std::string text;
    std::cout << "Enter a line of text:\n"; // Prompt user for input
    std::getline(std::cin, text);           // Reads a line of text including spaces

    unsigned vowels = 0;     // Initialize count of vowels
    unsigned consonants = 0; // Initialize count of consonants

    // Iterate over each character in the input string
    for (size_t i = 0; i < text.length(); ++i)
    {
        if (std::isalpha(text[i])) // Check if the character is a letter
        {
            // Convert the current character to lowercase to simplify comparisons
            switch (std::tolower(text[i]))
            {
            // If the character is a vowel, increment the vowel counter
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowels;
                break;
            // If it's not a vowel, it must be a consonant, so increment the consonant counter
            default:
                ++consonants;
                break;
            }
        }
    }

    // Output the counts to the user
    std::cout << "Your input contained " << vowels << " vowels and "
              << consonants << " consonants." << std::endl;
}
