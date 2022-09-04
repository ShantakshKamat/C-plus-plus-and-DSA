/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}


*/

/*reverse of the same pattern can be obtained using this code*/
/*
321
321
321
*/

/*#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
try this


1 2 3
4 5 6
7 8 9

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}