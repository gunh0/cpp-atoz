## Operations on array<>s As a Whole

You can compare entire array<> containers using any of the comparison operators as long as the containers are of the same size and they store elements of the same type. Here’s an example:

```c++
std::array<double,4> these {1.0, 2.0, 3.0, 4.0};
std::array<double,4> those {1.0, 2.0, 3.0, 4.0};
std::array<double,4> them {1.0, 1.0, 5.0, 5.0};

if (these == those) std::cout << "these and those are equal." << std::endl;
if (those != them) std::cout << "those and them are not equal." << std::endl;
if (those > them) std::cout << "those are greater than them." << std::endl;
if (them < those) std::cout << "them are less than those." << std::endl
```

