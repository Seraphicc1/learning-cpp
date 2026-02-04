# 04 Namespaces

# Goal
Understand how and why namespaces are used

# Code
Look: `src/04_namespaces.cpp`

# Notes
- `namespace` "name"{} = creates a namespace
- used to give the same entity such as a variable different values
- `::` = refers to smth (e.g. std::cout << second::x;) <-- prints the x value of the second namespace
- `using namespace first` at the start of main code = will automatically use the first namespace without using `::` to refer to a specific namespace