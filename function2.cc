#include <iostream>
using namespace std;
int main()
{
    // write a function to check odd or even

    int flag = check();

    if (flag = 1)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}
int check()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}