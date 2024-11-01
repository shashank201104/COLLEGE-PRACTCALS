#include <bits/stdc++.h>
using namespace std;
//low:index of 1st element(1) high:index of last element(size)
int partition(int arr[],int low,int high)
{
  //choose the pivot
  
  int pivot=arr[high];
//   i is the smaller element index
  int i=(low-1);
  
  for(int j=low;j<=high;j++)
  {
    //If current element is smaller than the pivot swap them
    if(arr[j]<pivot)
    {
      //increase the index of smaller element
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}

           
void quickSort(int arr[],int low,int high)
{
  // when low is less than high
  if(low<high)
  {
    // pi is the partition return index of pivot
    
    int pi=partition(arr,low,high);
    
    //Recursion Call
    //smaller element than pivot goes left and
    //higher element goes right
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}
             
 
int main() {
  int arr[]={10,7,8,9,1,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  // Function call
  quickSort(arr,0,n-1);
  //Print the sorted array
  cout<<"Sorted Array\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
// This Code is Contributed By Diwakar Jha
