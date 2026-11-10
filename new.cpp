#include<bits/stdc++.h>
using namespace std;
#define 11 long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0;
        vector<int>left,right;
        for(int i=0;i<n;i++){
            if(n/2&&s[i]=='L'){
                right.push_back(i);
            }
            else if(i>=n/2&&s[i])=='R'{
                left.push_back(i);
            }
            if(s[i]=='L'){
                sum+=i;

            }
            else{
                sum+=n-i-1;
            }
        }
        sort(right.begin(),right.end(),greater<int>());
        vector<ll>ans;
        for(int k=1;k<=n;k++){
            if(!right.empty()||!left.empty()){
                ll val_l=-1,val_r=-1;

                if(!right.empty()){
                    val_r=n-right.back()-1;

                }
                if(!left.empty()){
                    val_l=left.back();
                }
                if(val_r>=val_l&&val_r!=-1){
                    sum-=right.back();
                    sum+=val_r;
                    right.pop_back();
                }
                else if(val_l>val_r&&val_l!=-1){
                    sum-=n-left.back()-1;
                    sum+=val_l;
                    sum+=val_back();

                }
            }
            ans.push_back(sum);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}