// Searching a string for characters from a set

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

int main() {
    std::string text;   // The string to be searched
    std::cout << "Enter some text terminated by *:\n";
    std::getline(std::cin, text, '*');

    const std::string separators{" ,;:.\"!?'\n"};   // Word delimiters
    std::vector<std::string> words; // Words found
    size_t start{text.find_first_not_of(separators)};   // First word start index

    while (start != std::string::npos)  // Find the words
    {
        size_t end = text.find_first_of(separators, start + 1); // Find end of word
        if (end == std::string::npos)
            end = text.length();
        words.push_back(text.substr(start, end - start));
        start = text.find_first_not_of(separators, end + 1);
    }

    std::cout << "Your string contains the following " << words.size() << " words:\n";
    size_t count{}; // Number output
    for (const auto &word: words) {
        std::cout << std::setw(15) << word;
        if (!(++count % 5))
            std::cout << std::endl;
    }
    std::cout << std::endl;
}
