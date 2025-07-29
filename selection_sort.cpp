#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minvalue=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<=arr[minvalue]){
                minvalue=j;
            }
        }
        swap(arr[i],arr[minvalue]);
    }
}
int main(){
    int arr[]={4,1,9,2,0,3};
    int n=sizeof(arr)/sizeof(arr[1]);
    cout<<"unsorted array ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    selectionSort(arr,n);
    cout<<"sorted array ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}