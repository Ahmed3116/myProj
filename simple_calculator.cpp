

#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    char operation;
    cout << "ente the first number:";
    cin >> num1;
    cout << "ente the second number:";
    cin >> num2;
    cout << "ente the operation:";
    cin >> operation;
    if (operation == '+')
        cout << num1<< "+"<< num2<<"=" << num1 + num2;
    else if (operation == '-')
        cout << num1 << "-" << num2 << "=" << num1 - num2;
    else if (operation == '/')
        cout << num1 << "/" << num2 << "=" << num1 / num2;
    else if (operation == '*')
        cout << num1 << "*" << num2 << "=" << num1 * num2;


}
