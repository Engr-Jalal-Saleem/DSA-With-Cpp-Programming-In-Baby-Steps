#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    while (!myStack.empty()) {
        std::cout << myStack.top() << " "; // Output: 3 2 1
        myStack.pop();
    }

    return 0;
}
