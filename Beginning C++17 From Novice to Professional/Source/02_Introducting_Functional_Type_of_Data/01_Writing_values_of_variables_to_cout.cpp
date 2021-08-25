// Writing values of various to cout

#include <iostream>

int main()
{
	int apple_count{ 15 };
	int orange_count{ 5 };
	int total_fruit{ apple_count + orange_count };

	std::cout << "The value of apple_count is " << apple_count << std::endl;
	std::cout << "The value of orange_count is " << orange_count << std::endl;
	std::cout << "The value of total_count is " << total_fruit << std::endl;
}