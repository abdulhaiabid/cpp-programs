#include <iostream>
using namespace std;

template <class Itemtype> 
class CircularQueue {
public:
    CircularQueue(int size) {
        max = size + 1; // 3
        front = rear = max - 1;
        items = new Itemtype[max];
    }
    
    bool isFull() {
        return ((rear + 1) % max == front);
    }

    bool isEmpty() {
        return (front == rear);
    }

    void enqueue(Itemtype value) {
        if (!isFull()) {
            rear = (rear + 1) % max;
            items[rear] = value;
        } else {
            return;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            front = (front + 1) % max;
        } else {
            return;
        }
    }

    Itemtype peek() {
        if (!isEmpty()) {
            return items[(front + 1) % max];
        } else {
            return Itemtype();
        }
    }

    void makeEmpty() {
        front = rear = max - 1;
    }

    ~CircularQueue() {
        delete[] items;
    }

private:
    int front, rear, max;
    Itemtype *items;
};

int main () {
    return 0;
}