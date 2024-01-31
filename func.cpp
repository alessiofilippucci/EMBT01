#include <iostream>
#include <string>
using namespace std;

string allowedOp = "+-*/";

void PrintResult(int res)
{
    cout << "Il totale è: " << res << endl;
}

void Sum(int num1, int num2)
{
    PrintResult(num1 + num2);
}

void Sub(int num1, int num2)
{
    PrintResult(num1 - num2);
}

void Mult(int num1, int num2)
{
    PrintResult(num1 * num2);
}

void Div(int num1, int num2)
{
    PrintResult(num1 / num2);
}

int GetNum()
{
    try
    {
        int num;
        cout << "Inserisci un numero: " << endl;
        cin >> num;
        return num;
    }
    catch(exception e)
    {
        return GetNum();
    }
}

char GetOperator()
{
    string op;
    cout << "Inserisci l'operazione da effettuare (+,-,*,/): " << endl;
    cin >> op[0];
    if (allowedOp.find(op) > -1)
        return op[0];
    else
        return GetOperator();
}

int main()
{
    int a = GetNum();
    int b = GetNum();

    switch (GetOperator())
    {
        case '+':
            Sum(a, b);
            break;
        case '-':
            Sub(a, b);
            break;
        case '*':
            Mult(a, b);
            break;
        case '/':
            Div(a, b);
            break;
        default:
            cout << "Not available";
            break;
    }

    return 0;
}