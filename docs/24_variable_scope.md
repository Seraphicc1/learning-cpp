# 24 Variable Scope

# Goal
Understand the differenc between a global and local variable

# Code
Look: `src/24_variable_scope.cpp`

# Notes
- Functions will use a local variable first before using a global one
- Functions can not use variables from other functions without arguments
- `::` = Scope Resolution Operator, in this case it makes the function use the global variable
