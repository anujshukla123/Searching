#include<iostream>
using namespace std;


/// Index of First Occurence in Sorted

/// Naive Solution

//
//int firstOccurrence(int arr[],int n,int x)
//{
//    for(int i=0;i<n;i++)
//        if(arr[i]==x)
//        return i;
//    return -1;
//}


/// O(log n) Solution

int firstOccurrence(int arr[],int low,int high,int x)
{
    if(low>high)  return -1;
    int mid=(low+high)/2;
    if(x>arr[mid])
        return firstOccurrence(arr,mid+1,high,x);
    else if(x<arr[mid])
        return firstOccurrence(arr,low,mid-1,x);
    else{
        if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
        else
            return firstOccurrence(arr,low,mid-1,x);
    }
}

int main()
{
    int x;

  int arr[]={10,20,20,30,40,50,60,70};
  int n=sizeof(arr)/sizeof(arr[0]);
  cin>>x;

  cout<<firstOccurrence(arr,0,n-1,x);
}
