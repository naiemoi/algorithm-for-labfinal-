#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int item){
    int left=0,right=n-1;
    while(left<=right){
       int mid=(left+right)/2;
        if(arr[mid]==item)
        return mid;
        else if(item>arr[mid])
        left=mid+1;
        else
        right=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={3,6,9,11,17,33};
    int n=sizeof(arr)/sizeof(arr[0]);
    int item=11;
    int result=binarySearch(arr,n,item);
    if(result==-1)
    cout<<"item not found";
    else
    cout<<"item is found at index "<<result<<endl;
    return 0;
}