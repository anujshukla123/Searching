#include<iostream>

using namespace std;
/// Count Is in a Sorted Binary Array

/// Naive Solution

//int countOnes(int arr[],int n)
//{
//    int low=0,high =n-1;
//    while(low<=high)
//    {
//        int mid=(low+high)/2;
//        if(arr[mid]==0)
//            low=mid+1;
//        else
//        {
//            if(mid==0||arr[mid-1]!=arr[mid])
//                return(n-mid);
//            else
//                high=mid-1;
//        }
//    }
//    return 0;
//}

///Efficient Solution

int sqRootFloor(int x)
{
    int low=1,high=x,ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int mSq=mid*mid;
        if(mSq==x)
            return mid;
        else if(mSq>x)
            high=mid-1;
        else
        {
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main()
{
    int x;
//    int arr[]={0,0,0,01,1,1,1,1,1};
//    int n=sizeof(arr)/sizeof(arr[0]);
   //cout<<countOnes(arr,n);
   cin>>x;
   cout<<sqRootFloor(x);
}
