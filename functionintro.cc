#include <iostream>
using namespace std;
void power1(int x, int y)
{
    int a = x;
    int b = y;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    cout << ans;
}

int power2(int x, int y)
{
    int a = x;
    int b = y;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}

int main()
{
    // try the function for multiple inputs

    // using int funtion
    int c = power2(6, 2);
    cout << c << endl;

    // using void functions
    power1(2, 3);
}
