#include <iostream>
using namespace std;
void selection(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int least = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[least])
            {
                least = j;
            }
        }
        if (i != least)
        {
            int temp = arr[i];
            arr[i] = arr[least];
            arr[least] = temp;
        }
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

    selection(arr, size);
    return 0;
}