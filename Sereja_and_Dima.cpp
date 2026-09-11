#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   // sort(a.begin(),a.end(),greater<int>());
   int l=0,s=0,d=0;
   int r=n-1; 
   
   for(int i=0;i<n;i++){
    if(a[l]>a[r]){
      if(i%2==0){
        s+=a[l];
       }
       else{
        d+=a[l];
       }
       l++;
    }
    else{
        if(i%2==0){
        s+=a[r];
       }
       else{
        d+=a[r];
       }
       r--;
    }
    
       
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}