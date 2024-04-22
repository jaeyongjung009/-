# include "calculator.h"

Calculator::Calculator(double x, char op, double y, double add)
{
    X = x;
    oper = op;
    Y = y;
    sum = add;

    switch (oper)
    {
    case '+':
        sum = X + Y;
        break;
    case '-':
        sum = X - Y;
        break;
    case '*':
        sum = X * Y;
        break;
    case '/':
        if (Y != 0) {
            sum = X / Y;
        }
        else {
            cout << "Error" << endl;
        }
        break;
    default:
        cout << "Error:사칙연산이 아님" << endl;
        break;
    }
}

void Calculator::print()
{
    cout << "Result: " << sum << endl;
    cout << endl;
}

double Calculator::getsum()
{
    return 0;
}
