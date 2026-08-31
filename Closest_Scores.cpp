#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int mn=INT_MAX;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
             mn=min(mn,abs(arr[i]-arr[j]));   
            
        }
    }
    cout<<mn<<endl;

    return 0;
}