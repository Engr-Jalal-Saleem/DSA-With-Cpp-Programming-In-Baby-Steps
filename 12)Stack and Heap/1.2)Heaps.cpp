#include <iostream>

int main() {
    int* ptr = new int; // Dynamic memory allocation
    *ptr = 10;

    std::cout << *ptr; // Output: 10

    delete ptr; // Memory deallocation

    return 0;
}
