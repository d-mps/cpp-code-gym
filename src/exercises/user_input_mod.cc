/**
 * Description: Create a program that asks for a number and prints EVEN or ODD.
 * Use a bool called isEven and set it to true or false. Use this bool to execute
 * an if else block.
 * 
 * @author Diana Spencer
 */
#include <iostream>


int main(int argc, char const *argv[])
{
    int value;
    bool isEven;

    printf("Enter integer: \n");
    std::cin >> value;
    
    if (value % 2 == 0) {
        isEven = true;
    } else {
        isEven = false;
    }

    if (isEven) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }

    return 0;
}
