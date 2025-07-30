#include<iostream>
using namespace std;

#define SIZE 5

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack is overflow" << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed to stack" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is underflow" << endl;
        } else {
            cout << arr[top] << " popped from stack" << endl;
            top--;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.pop();
    s.push(50);
    s.display(); 

    return 0;
}
