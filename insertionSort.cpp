#include<bits/stdc++.h>
using namespace std;

void insertionSort(int A[],int n){
    int j,temp;
    for(int i=1;i<n;i++){
        temp=A[i];
        j=i-1;
    
    while(j>=0&& A[j]>temp){
        A[j+1]=A[j];
        j--;
    }
    A[j+1]=temp;
        
  }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
  
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    return 0;
}