#include <iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int ncr(int n, int r)
{

    // nCr= n!/(n-r)!*r!;

    int numtr = fact(n);
    int denom = fact(n - r) * fact(r);

    int nCr = numtr / denom;
    return nCr;
}

int main()
{
    int n, r;
    cin >> n >> r;

    int ans = ncr(n, r);
    cout << "ans is :: " << ans;
}
