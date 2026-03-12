// wap to print the fibnocci serires using recurtion
#include <iostream>
using namespace std;

// recursive function to return nth Fibonacci number
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int terms;
    cout << "How many terms of the Fibonacci series do you want? ";
    cin >> terms;

    cout << "Fibonacci series up to " << terms << " terms:\n";
    for (int i = 0; i < terms; ++i)
    {
        cout << fib(i);
        if (i < terms - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}