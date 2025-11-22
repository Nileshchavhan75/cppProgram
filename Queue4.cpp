#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int size;
    int front, rear;

public:
    CircularQueue(int n) {
        size = n;
        front = rear = -1;
        arr = new int[n];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is overflow: Cannot insert " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = value;
        cout << value << " inserted into the Queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is underflow: Cannot dequeue." << endl;
            return;
        }
        cout << arr[front] << " removed from the Queue." << endl;
        if (front == rear) {
            front = rear = -1; // Reset the queue
        } else {
            front = (front + 1) % size;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty." << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }
};

int main() {
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50); // Queue is now full

    cq.display();

    cq.dequeue();
    cq.dequeue();

    cq.display();

    cq.enqueue(60);
    cq.enqueue(70); // Wrap-around happens here

    cq.display();

    cq.peek();

}
