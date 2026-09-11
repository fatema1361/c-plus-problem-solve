#include<bits/stdc++.h>
using namespace std;
int mn,mx;
void find_max_min(int arr[],int low,int high){
    if(low==high){
        if(arr[low]<mn){
            mn=arr[low];
        }
        if(arr[low]>mx){
            mx=arr[low];
        }
        return;
    }
    int mid=(low+high)/2;
    find_max_min(arr,low,mid);
    find_max_min(arr,mid+1,high);

    
}
int main(){
    int n=8;
    int arr[n]={12,5,23,7,19,3,15,10};
    find_max_min(arr,0,n-1);
    cout<<"min: "<<mn<<"max: "<<mx<<endl;
    return 0;
}