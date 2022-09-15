#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    // to initialise all the elements of array with same value
    // int num[5]={ [0 . . . 4 ] = 3 };               // num = { 3, 3, 3, 3, 3}
    int one[5] = {2, 3, 4, 5, 6};

    printArray(one, 5);

    // to calculate length of a array

    int l = sizeof(one) / sizeof(one[0]);

    cout << "size is : " << l;
    return 0;
}