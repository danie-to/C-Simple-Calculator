#include <iostream>

using namespace std;

int main()
{
    char oprt;
    int num1, num2;

    cout << "CALCULATOR" << endl;

    cout << "Please enter two numbers: " << endl;
    cin >> num1 >> num2;

    cout << "Which operation would you like to perform? (+, -, /, x, %)" << endl;
    cin >> oprt;

    if (oprt == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << "The sum is " << num1 + num2;
    }
    else if (oprt == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        cout << "The difference is " << num1 - num2;
    }
    else if (oprt == '/') {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        cout << "The quotient is " << num1 / num2;
    }
    else if (oprt == 'x') {
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << "The product is " << num1 * num2;
    }
    else if (oprt == '%') {
     cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
     cout << "The remainder is " << num1 % num2;
    }
    else
        cout << "Invalid input. Please try again.";


    return 0;
}
