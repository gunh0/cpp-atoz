// Comparing strings

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <vector>

int main() {
    std::vector<std::string> names;
    std::string input_name;
    char answer{};

    do {
        std::cout << "Enter a name: ";
        std::cin >> input_name;      // Read a name
        names.push_back(input_name); // ...add it to the vector
        std::cout << "Do you want to enter another name? (y/n): ";
        std::cin >> answer;
    } while (std::tolower(answer) == 'y');

    // Sort the names in ascending sequence
    bool sorted{};
    do {
        sorted = true; // remains true when names are sorted
        for (size_t i{1}; i < names.size(); ++i) {
            if (names[i - 1] > names[i]) {
                names[i].swap(names[i - 1]);
                sorted = false;
            }
        }
    } while (!sorted);
    size_t max_length{};
    for (const auto &name: names)
        if (max_length < name.length())
            max_length = name.length();
    const size_t field_width = max_length + 2;
    size_t count{};
    std::cout << "In ascending sequence the names you entered are:\n";
    for (const auto &name: names) {
        std::cout << std::setw(field_width) << name;
        if (!(++count % 5))
            std::cout << std::endl;
    }
    std::cout << std::endl;
}
