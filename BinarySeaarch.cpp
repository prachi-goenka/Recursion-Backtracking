#include<iostream>
using namespace std;
bool binarySearch(int arr[],int start, int end,int key){
     if(start>end)
     return false;
     int mid = (start+end)/2;
     if(arr[mid]==key)
     return true;
     if(key<arr[mid])
    return binarySearch(arr,start,mid,key);
     else
    return binarySearch(arr,mid,end,key);
     

}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(ar,0,n-1,key);
}
