#include <iostream>
using namespace std;

template <class Itemtype>
class Queue {
public:
    Queue(int size) {
        this->front = -1;
        this->rear = -1;
        max = size;
        items = new Itemtype[max];
    }

    void enqueue(Itemtype item) {
        if (isEmpty()) {
            front++;
        }

        if (isFull()) {
            rear = 0;
        } else {
            rear++;
            items[rear] = item;
        }
    }

    void dequeue() {
        front++;
    }
/*
    1 % 4 = 1;
    2 % 4 = 2;
    3 % 4 = 3;
    4 % 4 = 0; // Change occurs when left value is greater than or equals to right value.
*/
    bool isEmpty() const {
        return (front == -1);
        // if (rear + 1 == front)
    }

    bool isFull() const {
        return (rear == max - 1);
    }

    Itemtype peek() {
            return items[front];
    }
    
    ~Queue() {
        delete[] items;
    }
private:
    int front, rear, max;
    Itemtype* items;
};

int main()
{
    Queue <int> queue(4);

    queue.enqueue(20);
    cout << "Peek: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Peak: " << queue.peek() << endl;
    
    queue.enqueue(40);
    cout << "Peek: " << queue.peek() << endl;


    return 0;
}
