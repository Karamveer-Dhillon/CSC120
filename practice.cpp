#include <iostream>
#include <string>

class MyStackClass {
private:
    int size;
    std::string* stack;

public:
    MyStackClass() {
        size = 5;
        stack = new std::string[size];
        stack[0] = "first";
        stack[1] = "second";
        stack[2] = "third";
        stack[3] = "fourth";
        stack[4] = "fifth";
    }
    void printStack() {
        for (int i = 0; i < size; ++i) {
            std::cout << stack[i] << std::endl;
        }
    }

    void push(const std::string& input) {
        std::string* tempStack = new std::string[size + 1];
        tempStack[0] = input;

        for (int i = 0; i < size; ++i) {
            tempStack[i + 1] = stack[i];
        }

        delete[] stack;         // Free old memory
        stack = tempStack;      // Update pointer
        size += 1;              // Update size
    }
};

int main() {
    MyStackClass myStack;
    myStack.printStack();
    myStack.push("zero");
    myStack.printStack();
    return 0;
}
