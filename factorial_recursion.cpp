#include <iostream>
using namespace std;

int factorial(int n);

int main()
{

    int n = 0;

    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist.";
        return 0;
    }
    else
    cout << "Factorial of " << n << " = " << factorial(n);

}

int factorial(int n)
{
    //looping until n = 1
    if (n > 1)
        return n * factorial(n - 1);
    else
    //break
        return 1;
}