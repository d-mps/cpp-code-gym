/**
 * Description: Create a program where a user enters a number N and you
 * print every prime number up to and include N. 
 */
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> primes;
    int N;
    bool isPrime;
    
    printf("Enter number: ");
    std::cin >> N;

    if (N <= 1) {
        printf("Not a prime number. Try again.");
        exit(0);
    }

    primes.push_back(2);

    // Find all the prime numbers
    for (int i = 3; i <= N; i++) {
        isPrime = true;

        for (int p : primes) {
            if (i % p == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(i);
        }
    }

    // Print all prime numbers found.
    printf("Prime numbers up to %d:\n", N);
    for (int p : primes) {
        printf("%d\n", p);
    }

    return 0;
}
