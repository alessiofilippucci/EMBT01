#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string ab = "+-*/";
    std::string sb;

    cout << "Inserisci un carattere:" << endl;
    cin >> sb;

    while (ab.find(sb) == -1)
    {
        std::cout << "no" << endl;

        cout << "Inserisci un carattere:" << endl;
        cin >> sb;
    }

    cout << "OK" << endl;

    // int a, b, r;
    // char op;

    // cout << "Inserisci un carattere:" << endl;
    // cin >> op;

    // cout << "Inserisci un numero intero:" << endl;
    // cin >> a;

    // cout << "Inserisci un altro numero intero:" << endl;
    // cin >> b;

    // switch (op)
    // {
    // case '+':
    //     cout << "Somma";
    //     break;

    // case '-':
    //     cout << "Diff";
    //     break;

    // case '*':
    //     cout << "Molt";
    //     break;

    // case '/':
    //     cout << "Div";
    //     break;

    // default:
    //     cout << "Not available";
    //     break;
    // }

    return 0;
}
