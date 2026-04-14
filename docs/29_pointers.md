# 29 Pass by Reference vs Value

# Goal
Difference between the value of a variable and the reference

# Code
Look: `src/29_reference.cpp`

# Notes
- `&` = Before a variable to access its memory address
- Passing a variable to a function normally passes the value and makes a copy of the variable inside the memory. Making changes to that value inside the function does NOT change the original variable.
- `&` = Use in the function declaration and definition to access the memory of the variable and make changes to the variable apply to the original one aswell
