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
        set<int>st(a.begin(),a.end());
        int l=0,r=n-1;
        bool found=false;

        while(l<r){
            int mn=*st.begin();
            int mx=*st.rbegin();
            if(a[l]==mn||a[l]==mx){
                st.erase(a[l]);
                l++;
            }
            else if(a[r]==mn||a[r]==mx){
                st.erase(a[r]);
                r--;
            }
            else{
                cout<<l+1<<" "<<r+1<<endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<-1<<endl;
        }
    }
    return 0;
}