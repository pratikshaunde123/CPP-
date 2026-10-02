#include<iostream>
using namespace std;
 main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if(b == 0)
        {
            throw "\nException cannot divide by zero:";
        }

        cout << "Result = " << a / b;
    }
    catch(const char *x)
    {
        cout << "Exception"<<x;
    }

}