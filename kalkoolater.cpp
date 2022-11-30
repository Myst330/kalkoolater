#include <iostream>
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
            cout << num1 op num2 << "=" << answer << endl;
        case '-':
            answer = num1 - num2;
            cout << num1 op num2 << "=" << answer << endl;
        case '*':
            answer = num1 * num2;
            cout << num1 op num2 << "=" << answer << endl;
        case '/':
            answer = num1 / num2;
            cout << num1 op num2 << "=" << answer << endl;


    }

    system("pause");

}