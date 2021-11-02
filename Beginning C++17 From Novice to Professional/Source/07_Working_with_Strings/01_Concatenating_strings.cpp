// Title: Concatenating strings

#include <iostream>
#include <string>

int main() {
    std::string first;
    std::string second;

    std::cout << "Enter your first name: ";
    std::cin >> first;

    std::cout << "Enter your second name: ";
    std::cin >> second;

    std::string sentence{"Your full name is "};
    sentence += first + " " + second + ".";
    std::cout << sentence << std::endl;
    std::cout << "The string contains " << sentence.length() << " charactoers." << std::endl;
}