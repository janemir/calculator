#include <iostream>
using namespace std;

double calculate(double, double, char);

int main()
{
    double n, m;
    char op;

    cout << "Enter the first number: ";
    cin >> n;
    cout << "Enter the second number: ";
    cin >> m;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;

    cout << "Result: " << calculate(n, m, op) << endl;

    return 0;
}

double calculate(double n, double m, char op)
{
    switch (op)
    {
    case '+':
        return n + m;
    case '-':
        return n - m;
    case '*':
        return n * m;
    case '/':
        if (m != 0) {
            return n / m;
        }
        else {
            cout << "Error: division by zero" << endl;
            return 0;
        }
    default:
        cout << "Error: incorrect operation" << endl;
        return 0;
    }
}
