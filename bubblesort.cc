#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++) /*its like round/pass no*/
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        cout << "Pass" << i << ":";
        print(arr, n);
        if (swapped == false)
        { /*already sorted*/
            break;
        } /*optimization!!!*/
    }
}

int main()
{
    int first[6] = {10, 1, 7, 6, 14, 9};
    bubblesort(first, 6);

    return 0;
}
