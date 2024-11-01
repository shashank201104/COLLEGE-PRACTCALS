#include  <iostream>
using namespace std;
//function to get the maximum element in the array
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
// countsort that will be used to sort the digits
// it take 3 argument 
//arr: input array
//n: size of the input array
//exp: it determines for which digit place the array need to be sorted 
void countSort(int arr[], int n, int exp)
{
    //to temp. store the sorted array
    int output[n];
    //count array the no of occurance of all digits(0-9) on given digit place
    int count[10] = { 0 };
 

    for (int i = 0; i < n; i++)
        //by dividing by array we will get the required digit place and hence we can increment the value in count array
        count[(arr[i] / exp) % 10]++;

    //to add the cumulative sum of last two
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];


    for (int i = n - 1; i >= 0; i--) {
        // count[(arr[i] / exp) % 10] is to find the position of the current element(arr[i]) in the sorted order.
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        //decrement the count of same element
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
 
void radixsort(int arr[], int n)
{
    int m = getMax(arr, n);
    // m/exp is to check the no of digits in max element and exp*=10 is to increase itself by a digit
    for (int exp = 1; m / exp > 0; exp *= 10){
        countSort(arr, n, exp);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={54,354,93,7,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr,n);
    return 0;
}