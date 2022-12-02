#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    char op;
    double num1, num2, answer;


    cout << "enter operation: ";
    cin >> op;

    cout <<" enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            answer = num1 + num2;
            
        case '-':
            answer = num1 - num2;
            
        case '*':
            answer = num1 * num2;
            
        case '/':
            answer = num1 / num2;
    }
    cout << "Your answer is:" << answer << endl;


    system("pause");

}