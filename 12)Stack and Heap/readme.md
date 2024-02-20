# Stacks and Heap

## Definition

### Stack

A stack is a data structure that follows the Last In, First Out (LIFO) principle. It means that the last element added to the stack will be the first one to be removed. Stack operations are performed at one end, traditionally referred to as the "top" of the stack.

### Heap

A heap, also known as a dynamic memory allocation, is a region of memory where data can be stored and retrieved randomly. Unlike a stack, where memory allocation and deallocation are performed in a sequential manner, heap memory allows for dynamic allocation and deallocation of memory blocks during program execution.

## Differences

1. **Memory Management**:

   - Stack: Memory management is handled automatically by the compiler through a process known as static memory allocation.
   - Heap: Memory management is dynamic and requires explicit allocation and deallocation by the programmer.
2. **Access Time**:

   - Stack: Access time is faster since it operates in a contiguous block of memory and follows a strict order.
   - Heap: Access time can be slower compared to the stack since memory allocation is not contiguous, and the program needs to search for available memory blocks.
3. **Scope**:

   - Stack: Variables declared on the stack have a limited scope and are only accessible within the block they are declared.
   - Heap: Variables allocated on the heap have a broader scope and can be accessed from anywhere in the program.

## Benefits and Drawbacks

### Stack

- **Benefits**:
  - Faster access time.
  - Automatically managed by the compiler.
  - Memory allocation and deallocation are straightforward.
- **Drawbacks**:
  - Limited size.
  - Variables have a limited scope.
  - Not suitable for dynamic memory allocation.

### Heap

- **Benefits**:
  - Dynamic memory allocation.
  - No size limitation (up to system memory).
  - Suitable for large data structures.
- **Drawbacks**:
  - Slower access time.
  - Manual memory management can lead to memory leaks and fragmentation.
  - Requires explicit memory allocation and deallocation.

## Coding Examples

### Stack (in C++)

```cpp
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
```

### Heap (in C++)

```cpp
#include <iostream>

int main() {
    int* ptr = new int; // Dynamic memory allocation
    *ptr = 10;

    std::cout << *ptr; // Output: 10

    delete ptr; // Memory deallocation

    return 0;
}
```

In the above example, memory is dynamically allocated on the heap using `new` and deallocated using `delete`. This allows for flexible memory management during program execution.****
