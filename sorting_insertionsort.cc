#include <iostream>
using namespace std;

// in this we shift instead of swap;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j]; /*shift one place forward to make space to put temp*/
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
        cout << "Pass " << i << ":";
        print(arr, n);
    }
}

int main()
{
    int first[4] = {4, 12, 11, 20};
    insertionSort(first, 4);

    return 0;
}