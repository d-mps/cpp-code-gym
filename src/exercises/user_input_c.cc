/*
Description:
    Create a program that asks the user for their first and last names.
    Display a greeting using their fullname.
*/
#include <iostream>

int main(int argc, char const *argv[])
{
    std::string first;  // C++ string
    std::string last;

    printf("Please enter your fullname:\n");  // C
    printf("Enter first name: \n");
    std::cin >> first;
    printf("Enter last name: \n");
    std::cin >> last; // C++ 

    std::cout << "Good morning, " << first << " " << last << "! Today will be a great day.";
    return 0;
}
