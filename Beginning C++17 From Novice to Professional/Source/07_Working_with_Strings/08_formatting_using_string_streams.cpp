// Formatting using string streams
/* Sample IO:
How many numbers do you want to enter? 7
1.23456
3.1415
1.4142
-5
17.0183
-25.1283
1000.456
  1.235  3.142  1.414     -5  17.02
 -25.13   1000
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
int main()
{
    std::vector<double> values;

    std::cout << "How many numbers do you want to enter? ";
    size_t num{};
    std::cin >> num;
    for (size_t i{}; i < num; ++i) // Stream in all 'num' user inputs
    {
        double d{};
        std::cin >> d;
        values.push_back(d);
    }

    std::stringstream ss;          // Create a new string stream
    for (size_t i{}; i < num; ++i) // Use it to compose the requested string
    {

        ss << std::setprecision(4) << std::setw(7) << std::right << values[i];
        if ((i + 1) % 5 == 0)
            ss << std::endl;
    }
    std::string s{ss.str()}; // Extract the resulting string using the str() function
    std::cout << s << std::endl;
}