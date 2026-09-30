#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int a_left=0;
        int a_right=1;
        for(int i=0;i<n;i++){
            if(a[i]>a[a_left]){
                a_right=a_left;
                a_left=i;
            }
            else if(i!=a_left&&a[i]>a[a_right]){
                a_right=i;
            }
        }
        if(a_left>a_right){
            swap(a_left,a_right);
        }
        
        cout<<a_left<<" "<<a_right<<endl;
    }
    return 0;
}