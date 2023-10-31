#include <iostream>

class Stack {
private:
    static const int max_size = 100;
    int arr[max_size];
    int top;

public:
    Stack() {
        top = -1;  // Initialize the top of the stack
    }

  
    void push(int value) {
        if (top >= max_size - 1) {
            std::cout << "Stack overflow! Cannot push element " << value << std::endl;
        } else {
            arr[++top] = value;
            std::cout << "Pushed " << value << " onto the stack." << std::endl;
        }
    }

 
    void pop() {
        if (top < 0) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        } else {
            std::cout << "Popped " << arr[top--] << " from the stack." << std::endl;
        }
    }

    
    int peek() {
        if (top < 0) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    
    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack myStack;  

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.peek() << std::endl;

    myStack.pop();
    myStack.pop();
    myStack.pop();

    if (myStack.isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    return 0;
}
