#include <iostream>
#include <string>
using namespace std;

char GetOperator()
{
    string allowedOp = "+-*/";
    string op;

    do
    {
        cout << "Inserisci un carattere:" << endl;
        cin >> op;
    } while (allowedOp.find(op) == -1);

    return op[0];
}

int GetNumber(string msg)
{
    int a;
    cout << msg << endl;
    cin >> a;
    return a;
}

int Sum(int num1, int num2)
{
    return num1 + num2;
}

int Diff(int num1, int num2)
{
    return num1 - num2;
}

int Prod(int num1, int num2)
{
    return num1 * num2;
}

int Div(int num1, int num2)
{
    return num1 / num2;
}

void Calculate(char op, int a, int b)
{
    int res;

    switch (op)
    {
    case '+':
        res = Sum(a, b);
        break;

    case '-':
        res = Diff(a, b);
        break;

    case '*':
        res = Prod(a, b);
        break;

    case '/':
        res = Div(a, b);
        break;

    default:
        cout << "Not available";
        break;
    }

    cout << "Il risultato è: " << res << endl;
}

bool Continue()
{
    cout << "Vuoi fare altri calcoli? (si, no = default)" << endl;
    string answer;
    cin >> answer;
    cout << endl;
    return answer == "si";
}

void Calculator()
{
    cout << "Benvenuto nella mia CALCOLATRICE" << endl;

    char op = GetOperator();

    int a = GetNumber("Inserisci un numero intero:");
    int b = GetNumber("Inserisci un altro numero intero:");

    Calculate(op, a, b);
}

int main()
{
    bool run = true;

    do
    {
        Calculator();
        run = Continue();
    } while (run);

    return 0;
}