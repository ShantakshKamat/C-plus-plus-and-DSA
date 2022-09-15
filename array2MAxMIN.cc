#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;
}
int main()
{

    // worst practise to put a variable size..instead put 1000
    int size;
    cout << "enter size: ";
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "MAX element is: " << getMax(arr, size) << endl;
    cout << "MIN element is: " << getMin(arr, size);

    return 0;
}