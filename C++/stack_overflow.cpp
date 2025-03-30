#include <iostream>

void recursiveFunction() {
    int arr[100000]; // Allocating large local variable (optional)
    std::cout << "Stack frame added\n";
    recursiveFunction(); // Infinite recursion
}

int main() {
    recursiveFunction();
    return 0;
}
