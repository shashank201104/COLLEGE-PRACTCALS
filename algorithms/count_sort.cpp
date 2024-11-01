
#include <iostream>
using namespace std;

void countSort(int array[], int size)
{
    int output[size];
    int max = array[0];
//getting max value from input array
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    int count[max];
    //initializing count[] with zeroes
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cout<<"enter the size of input array\n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element  of array:  ";
        cin>>arr[i];
    }
    countSort(arr,size);
    return 0;
}