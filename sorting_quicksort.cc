#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }

    // place pivot at sahi place
    int pivotindex = s + cnt;
    swap(arr[pivotindex], arr[s]); // placing pivot at calculated index

    // left and right part sambhalo now
    int i = s;
    int j = e;

    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        // again match condition.
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int array[5] = {2, 1, 3, 5, 4};
    int n1 = 5;
    int arr2[9] = {10, 20, 40, 60, 30, 90, 60, 50, 70};
    int n2 = 9;

    quickSort(array, 0, n1 - 1);
    for (int i = 0; i < n1; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    quickSort(arr2, 0, n2 - 1);
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}