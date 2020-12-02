/*
Description:
    Create a program that asks the user to input a whole numbers and another
    number which is a decimal. Store the sum of two numbers in a third variable.
    Display the result.
*/
#include <iostream>
 
int main(int argc, char const *argv[])
{
    int x;
    float y;

    printf("Please enter two integers:\n");
    printf("Enter integer number: \n");
    std::cin >> x;
    printf("Enter decimal number: \n");
    std::cin >> y;

    float res;
    res = x + y;

    printf("Result: %d + %f = %f\n", x, y, res);
    return 0;
}
