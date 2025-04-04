#include <iostream>
#include <string>
#include <array>

template<typename T,std::size_t arraySize>
class Stack {
    private:
        int top = 0;
        std::array<T, arraySize> stack;

    public:
        // Function to push an element onto the stack.
        void push (const T& input) {
            if (top >= arraySize){
                std::cout << "Stack overflow!" << std::endl;
                return;
            }
            stack.at(top) = input;
            top++;
        }
        // Function to pop the top element of the stack.
        T pop() {
            if (top <= 0) {
                std::cout << "Stack underflow!" << std::endl;
                return T();
            }
            top--;
            return stack.at(top);
        }
};

int main() {
    Stack<int, 5> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.push(4);
    intStack.push(5);
    // Stack overflow.
    intStack.push(6);
    int value = intStack.pop();
    std::cout << value << std::endl;

    Stack<std::string,3> strStack;
    strStack.push("First");
    strStack.push("Second");
    strStack.push("Third");
    // Stack overflow.
    strStack.push("Fourth");
    std::string word = strStack.pop();
    std::cout << word << std::endl;

    return 0;
}
