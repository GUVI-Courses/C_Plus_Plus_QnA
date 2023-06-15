#include<iostream>
using namespace std;


int peakPillar(int arr[], int low, int high, int n)
{
    int mid = low + (high-low)/2 ;
    if((mid==0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
    {
       return mid; 
    }
    else if (mid > 0 && arr[mid-1] > arr[mid])
    {
        return peakPillar(arr, low, mid-1, n);
    }
    else
    {
        return peakPillar(arr, mid+1, high , n);


    }


}


int main()
{
    int arr[]= {1,6,8,4,2,7,9};
    int n =7;


    cout<<"peak element is :  "<<peakPillar(arr, 0 , n-1, n);
    return 0 ; 
}