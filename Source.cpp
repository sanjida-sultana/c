#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Triangle App" << endl;
    cout << "--------------------" << endl;
    cout << "Enter the size of the triangles [3,4,5,6,7]:";
again:
    cin >> n;


    if (n < 3 || n > 7)
    {
        cout << "Invalid input. Try again." << endl;
        goto again;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ("*");
        }
        cout << ("\n");
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            cout << (" ");
        }
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << ("*");
        }
        cout << ("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            cout << (" ");
        }
        for (j = 1; j <= i; j++)
        {
            cout << ("*");
        }
        cout << ("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << ("*");
        }
        cout << ("\n");
    }
    return 0;
}