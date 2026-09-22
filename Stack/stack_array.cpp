#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[top--] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack: ";
    s.display();

    s.pop();

    cout << "After pop: ";
    s.display();

    return 0;
}
