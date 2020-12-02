/*
Description:
    Create a program that asks the user to input two whole numbers. Display
    the result of their inputs.
*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int x;
    int y;

    printf("Please enter two integers:\n");
    printf("Enter first number: \n");
    std::cin >> x;
    printf("Enter second number: \n");
    std::cin >> y;

    printf("Your numbers are %d and %d \n", x, y);
    return 0;
}
