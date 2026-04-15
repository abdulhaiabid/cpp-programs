#include <iostream>
using namespace std;

class LinearQueue {
public:
    LinearQueue(int size) {
        max = size;
        front = rear = -1;
        items = new int[max];
    }

    void enqueue(int value) {
        if (front == -1) {
            front++;
        }

        rear++;
        items[rear] = value;
    }

    void dequeue() {
        front++;
    }

    int peek() {
        return items[front];
    }

    void display() {
        for(int i = front; i <= rear; i++) {
            cout << items[i] << " ";
        }
    }

    ~LinearQueue() {
        delete[] items;
    }

private:
    int front, rear, max;
    int *items; // datatype depends
};

int main() {
    LinearQueue q(5);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();

    q.dequeue();
    q.dequeue();
    cout << "\n";
    q.display();
    return 0;
}

