#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

// Stores and calculates factorial using a forward stack
void forwardStack(int n)
{
    stack<int> numbers;

    // Push numbers from 1 to n into the stack
    for (int i = 1; i <= n; i++)
        numbers.push(i);

    long long factorial = 1;

    cout << "FORWARD STACK\n";

    // Calculate factorials in forward order
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        cout << i << "! = " << factorial << endl;
    }

    // Remove the values to demonstrate LIFO
    cout << "Stack values removed: ";
    while (!numbers.empty())
    {
        cout << numbers.top() << " ";
        numbers.pop();
    }
    cout << endl;
}

// Calculates factorial using a backward stack
void backwardStack(int n)
{
    stack<int> numbers;

    // Push numbers from n down to 1
    for (int i = n; i >= 1; i--)
        numbers.push(i);

    long long factorial = 1;

    cout << "\n===== BACKWARD STACK =====\n";

    // Because of LIFO, values come out as 1, 2, 3 ... n
    while (!numbers.empty())
    {
        int value = numbers.top();
        numbers.pop();

        factorial *= value;
        cout << value << "! = " << factorial << endl;
    }
}

int main()
{
    int n;

    cout << "\n";
    cout << "       FACTORIAL USING STACKS\n";
    cout << "\n";
    cout << "Enter a positive integer n: ";
    cin >> n;

    // Check that n is within a safe range for long long
    if (n <= 0)
    {
        cout << "Please enter a number greater than 0." << endl;
        return 0;
    }

    if (n > 20)
    {
        cout << "Please enter a number from 1 to 20." << endl;
        return 0;
    }

    // Run both implementations
    forwardStack(n);
    backwardStack(n);

    cout << "Program completed successfully.\n" << endl;

    return 0;
}
