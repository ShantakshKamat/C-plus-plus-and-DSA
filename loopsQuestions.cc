#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = a + 1;

    if ((a = 3) == b)
    {
        cout << a;
    }
    else
    {
        cout << a + 1;
    }

    return 0;
}
//*********************
// SUM OF ALL EVEN NUMBERS TILL A NUMBER N

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}

// PRINT ALL PRIME NUMBERS TILL N
#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) // n is divisible by others less than it
            return false;
    }
    return true;
}

void print(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int n;

    cout << "Enter number: " << endl;
    cin >> n;

    print(n);

    return 0;
}