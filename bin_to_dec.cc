#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int bit = n & 1;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int dig = n % 10;
        if (dig == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << ans;

    return 0;
}