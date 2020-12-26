#include<iostream>
using namespace std;
/// Count occurence in a sorted array

/// Naive  Solution ///
int lastOcc(int arr[],int n,int x);
int firstOcc(int arr[],int n,int x);
int countOcc(int arr[],int n,int x)
{
    int first=firstOcc(arr ,n,x);
    if(first==-1)
        return 0;
    else
        return (lastOcc(arr,n,x)-first+1);

}
int lastOcc(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid =(low+high)/2;
        if(arr[mid]<x)
            low=mid+1;
        else if(arr[mid]>x)
            high=mid-1;

    else{
        if(mid!=n-1||arr[mid]!=arr[mid+1])
            return mid;
        else
            low=mid+1;
    }
}
return -1;
}
int firstOcc(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
        if(arr[i]==x)
        return i;
    return -1;
}


int main()

{
    int arr[]={10,20,20,20,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countOcc(arr,n,20);
}
