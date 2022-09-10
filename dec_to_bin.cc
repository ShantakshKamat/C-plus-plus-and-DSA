
// given 1,2,3

/*to generate number in same flow
initially ans=0

ans=ans*10+ 1 = 0*10 +1=1

ans=ans*10 + 2= 1*10 + 2= 12
similarly ans=123 in next iteration

*/

/*to generate number in reverse flow

ans = dig * (10^i) + ans = 1 * 10^0 + 0 = 1
ans = dig * (10^i) + ans = 2 * 10^1 + 1 = 21
ans = dig * (10^i) + ans = 3 * 10^2 + 21 = 321

*/

/*

logic is simple

to get binary 0,1s  & is used




*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {

        int bit = n & 1; // if a dig of n is 1 , resulting & will be 1
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1; // used to shift bits
        i++;
    }
    cout << ans;
    return 0;
}

/*

******* WRITE CODE TO CONVERT NEGATIVE NUMBER TO BINARY FORMAT *******

*/