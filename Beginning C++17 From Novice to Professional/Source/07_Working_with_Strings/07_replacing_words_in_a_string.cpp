// Replacing words in a string
/* Sample IO:
Enter a string terminated by *:
A rose is a rose is a rose.*
Enter the word to be replaced: rose
Enter the string to be substituted for rose: dandelion

The string you entered is now:
A dandelion is a dandelion is a dandelion.
*/

#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter a string terminated by *:\n";
    std::getline(std::cin, text, '*');

    std::string word;
    std::cout << "Enter the word to be replaced: ";
    std::cin >> word;

    std::string replacement;
    std::cout << "Enter the string to be substituted for " << word << ": ";
    std::cin >> replacement;

    if (word == replacement)  // Verify there's something to do
    {
        std::cout << "The word and its replacement are the same.\n"
                  << "Operation aborted." << std::endl;
        return 1;
    }

    size_t start{text.find(word)}; // Index of 1st occurrence of word
    while (start != std::string::npos)  // Find and replace all occurrences
    {
        text.replace(start, word.length(), replacement);    // Replace word
        start = text.find(word, start + replacement.length());
    }

    std::cout << "\nThe string you entered is now:\n" << text << std::endl;
}