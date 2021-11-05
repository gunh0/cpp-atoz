// Searching within Substrings
/* Sample
Enter the string to be searched and press Enter:
Smith, where Jones had had "had had", had had "had". "Had had" had had the examiners' approval.
Enter the string to be found and press Enter:
had
Your text contained 10 occurrences of "had".
*/

#include <iostream>
#include <string>

int main() {
    std::string text; // The string to be searched
    std::string word; // Substring to be found
    std::cout << "Enter the string to be searched and press Enter:\n";
    std::getline(std::cin, text);
    std::cout << "Enter the string to be found and press Enter:\n";
    std::getline(std::cin, word);
    size_t count{}; // Count of substring occurrences
    size_t index{}; // String index
    while ((index = text.find(word, index)) != std::string::npos) {
        ++count;
        index += word.length();
    }
    std::cout << "Your text contained " << count << " occurrences of \""
              << word << "\"." << std::endl;
}