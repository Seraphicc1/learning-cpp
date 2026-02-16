#include <iostream>

int main()
{
    char op;
    double num1, num2, result;

    std::cout << "------------------CALCULATOR------------------" << std::endl;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
    }

    if(op == '+' || op == '-' || op == '*' || (op == '/' && num2 != 0))
        std::cout << "Result: " << result << std::endl;

    std::cout << "----------------------------------------------" << std::endl;
    return 0;
}