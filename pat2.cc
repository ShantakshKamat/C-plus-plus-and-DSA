/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < i + 1)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
\
*/

#include <iostream>
using namespace std;
int main()
{
    /*

    1
    22
    333
    4444
    */

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}