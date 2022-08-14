#include <iostream>
using namespace std;

int main() {

    char op;
    double num1, num2;

    cout << "enter operation: ";
    cin >> op;

    cout <<" enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << num1 + num2 << endl;
        case '-':
            cout << num1 - num2 << endl;
        case '*':
            cout << num1 * num2 << endl;
        case '.':
            cout << num1 / num2 << endl;


    }


}