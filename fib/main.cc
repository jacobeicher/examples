/**
 * @file main.cc
 * @author Krerkkiat Chusap
 */
#include <iostream>

#include "fib.h"
/**
 * @brief main function drives program execution 
 * @return EXIT_SUCCESS on completion of program 
*/
int main() {
    int n;
    std::cout << "Please enter n: ";
    std::cin >> n;

    std::cout << "Fib(n) is " << fib_recursive(n) << std::endl;
    return EXIT_SUCCESS;
}