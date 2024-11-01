#include <iostream>
using namespace std;

void insertion(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "enter the size of array\t";
    cin >> size;
    int arr[size];
    cout << "\nEnter elements of array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertion(arr, size);
    return 0;
}