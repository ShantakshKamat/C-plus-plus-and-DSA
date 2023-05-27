// we start at i=0, take the minimum of all the elements after i=0 and place it at i=0;

#include <iostream>
using namespace std;

// consider array 64 25 12 22 11
//             i= 0  1   2  3  4

// first assume that minindex has to be the index of minimum element..assign minindex=i..here 0;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) /*we go just till <n-1 because last element is already sorted by now..no need to sort*/
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++) /*Note j<n to traverse all the 25,12,22,11*/
        {
            if (arr[minindex] > arr[j])
                minindex = j; /*finding an element smaller that at minindex*/
        }
        swap(arr[minindex], arr[i]);
        cout << "Pass" << i << ":";
        print(arr, n);
    }
}

int main()
{
    int first[5] = {64, 25, 12, 22, 11};
    selectionsort(first, 5);

    return 0;
}