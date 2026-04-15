#include <iostream>
using namespace std;

class Stack {
public:
    Stack(int size) {
        topVar = -1;
        max = size;
        items = new int[max];
    }

    bool isFull() {
        return topVar >= max - 1;
    }

    bool isEmpty() {
        return topVar <= -1;
    }

    void push(int value) {
        if (!isFull()) {
            topVar++;
            items[topVar] = value;
        } else {
            return;
        }
    }

    void pop() {
        if (!isEmpty()) {
            topVar--;
        } else {
            return;
        }
    }

    int peek() {
        return items[topVar];
    }

    ~Stack() {
        delete[] items;
    }
private:
    int topVar, max;
    int *items;
};

int main() {
    Stack myStack(4);
    myStack.push(30);
    cout << myStack.peek() << " ";

    myStack.push(40);
    cout << myStack.peek() << " ";

    myStack.push(50);
    cout << myStack.peek() << " ";
    

    return 0;
}